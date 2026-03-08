#include <chrono>
#include <memory>
#include <string>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "board_driver.hpp"
#include "motor_msgs/msg/board_status.hpp"
#include "motor_msgs/srv/probe_board.hpp"

using namespace std::chrono_literals;

namespace motor_hw
{

class BoardProbeNode : public rclcpp::Node
{
public:
  BoardProbeNode()
  : Node("board_probe")
  {
    this->declare_parameter<std::string>("transport", "serial");
    this->declare_parameter<std::string>("device_path", "/dev/ttyS1");
    this->declare_parameter<int>("baudrate", 115200);
    this->declare_parameter<int>("probe_timeout_ms", 300);
    this->declare_parameter<bool>("auto_probe_on_start", true);
    this->declare_parameter<double>("publish_rate_hz", 1.0);

    transport_ = this->get_parameter("transport").as_string();
    device_path_ = this->get_parameter("device_path").as_string();
    baudrate_ = this->get_parameter("baudrate").as_int();
    probe_timeout_ms_ = this->get_parameter("probe_timeout_ms").as_int();
    auto_probe_on_start_ = this->get_parameter("auto_probe_on_start").as_bool();
    publish_rate_hz_ = this->get_parameter("publish_rate_hz").as_double();

    driver_.configure(transport_, device_path_, baudrate_, probe_timeout_ms_);

    status_pub_ = this->create_publisher<motor_msgs::msg::BoardStatus>(
      "/board/status", 10);

    probe_srv_ = this->create_service<motor_msgs::srv::ProbeBoard>(
      "/board/probe",
      std::bind(
        &BoardProbeNode::handle_probe,
        this,
        std::placeholders::_1,
        std::placeholders::_2));

    if (auto_probe_on_start_) {
      const bool ok = driver_.probe();
      RCLCPP_INFO(
        this->get_logger(),
        "Initial probe result: %s (%s)",
        ok ? "SUCCESS" : "FAIL",
        driver_.status_text().c_str());
    }

    const auto period = std::chrono::duration<double>(1.0 / publish_rate_hz_);
    timer_ = this->create_wall_timer(
      std::chrono::duration_cast<std::chrono::milliseconds>(period),
      std::bind(&BoardProbeNode::publish_status, this));
  }

private:
  void handle_probe(
    const std::shared_ptr<motor_msgs::srv::ProbeBoard::Request> request,
    std::shared_ptr<motor_msgs::srv::ProbeBoard::Response> response)
  {
    (void)request;

    driver_.configure(transport_, device_path_, baudrate_, probe_timeout_ms_);
    const bool ok = driver_.probe();

    response->detected = ok;
    response->board_name = driver_.board_name();
    response->device_path = driver_.device_path();
    response->message = driver_.status_text();

    RCLCPP_INFO(
      this->get_logger(),
      "Probe service called: %s (%s)",
      ok ? "SUCCESS" : "FAIL",
      driver_.status_text().c_str());
  }

  void publish_status()
  {
    motor_msgs::msg::BoardStatus msg;
    msg.stamp = this->now();
    msg.detected = (driver_.status_text() == "Board detected and responding");
    msg.board_name = driver_.board_name();
    msg.transport = driver_.transport();
    msg.device_path = driver_.device_path();
    msg.firmware_major = driver_.firmware_major();
    msg.firmware_minor = driver_.firmware_minor();
    msg.status_text = driver_.status_text();

    status_pub_->publish(msg);
  }

  BoardDriver driver_;

  std::string transport_;
  std::string device_path_;
  int baudrate_;
  int probe_timeout_ms_;
  bool auto_probe_on_start_;
  double publish_rate_hz_;

  rclcpp::Publisher<motor_msgs::msg::BoardStatus>::SharedPtr status_pub_;
  rclcpp::Service<motor_msgs::srv::ProbeBoard>::SharedPtr probe_srv_;
  rclcpp::TimerBase::SharedPtr timer_;
};

}  // namespace motor_hw

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<motor_hw::BoardProbeNode>());
  rclcpp::shutdown();
  return 0;
}
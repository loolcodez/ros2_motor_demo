#include "board_driver.hpp"

namespace motor_hw
{

BoardDriver::BoardDriver()
: transport_("serial"),
  device_path_("/dev/ttyS1"),
  baudrate_(115200),
  probe_timeout_ms_(300),
  detected_(false),
  board_name_(""),
  firmware_major_(0),
  firmware_minor_(0),
  status_text_("Not probed yet")
{
}

void BoardDriver::configure(
  const std::string & transport,
  const std::string & device_path,
  int baudrate,
  int probe_timeout_ms)
{
  transport_ = transport;
  device_path_ = device_path;
  baudrate_ = baudrate;
  probe_timeout_ms_ = probe_timeout_ms;
}

bool BoardDriver::probe()
{
  (void)baudrate_;
  (void)probe_timeout_ms_;

  if (device_path_ == "mock_fail") {
    detected_ = false;
    board_name_ = "";
    firmware_major_ = 0;
    firmware_minor_ = 0;
    status_text_ = "No response from board";
    return false;
  }

  detected_ = true;
  board_name_ = "MOTOR_CTRL_V1";
  firmware_major_ = 1;
  firmware_minor_ = 0;
  status_text_ = "Board detected and responding";
  return true;
}

std::string BoardDriver::board_name() const
{
  return board_name_;
}

std::string BoardDriver::transport() const
{
  return transport_;
}

std::string BoardDriver::device_path() const
{
  return device_path_;
}

int BoardDriver::firmware_major() const
{
  return firmware_major_;
}

int BoardDriver::firmware_minor() const
{
  return firmware_minor_;
}

std::string BoardDriver::status_text() const
{
  return status_text_;
}

}  // namespace motor_hw
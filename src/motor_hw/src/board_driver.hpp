#pragma once

#include <string>

namespace motor_hw
{

class BoardDriver
{
public:
  BoardDriver();

  void configure(
    const std::string & transport,
    const std::string & device_path,
    int baudrate,
    int probe_timeout_ms);

  bool probe();

  std::string board_name() const;
  std::string transport() const;
  std::string device_path() const;
  int firmware_major() const;
  int firmware_minor() const;
  std::string status_text() const;

private:
  std::string transport_;
  std::string device_path_;
  int baudrate_;
  int probe_timeout_ms_;

  bool detected_;
  std::string board_name_;
  int firmware_major_;
  int firmware_minor_;
  std::string status_text_;
};

}  // namespace motor_hw
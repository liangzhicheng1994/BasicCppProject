#include <gflags/gflags.h>

#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

#include "logger.h"

int main(int argc, char* argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  logger::InitGlog(argv[0]);

  logger::ShutdownGlog();
  return 0;
}

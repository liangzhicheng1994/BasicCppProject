#include <cstdint>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "flags.h"
#include "logger.h"

int main(int argc, char* argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  logger::InitGlog(argv[0]);

  logger::ShutdownGlog();
  return 0;
}

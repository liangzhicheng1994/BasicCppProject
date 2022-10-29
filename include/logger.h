#pragma once

#include <glog/logging.h>

namespace logger {

void InitGlog(const char* argv0);
void ShutdownGlog();

}  // namespace logger

#include "logger.h"

namespace logger {

void InitGlog(const char* argv0) {
  FLAGS_log_dir = "../log";
  FLAGS_alsologtostderr = true;
  FLAGS_colorlogtostderr = true;
  FLAGS_stderrthreshold = google::GLOG_INFO;
  google::SetLogFilenameExtension(".log");
  google::InitGoogleLogging(argv0);
  google::InstallFailureSignalHandler();
}

void ShutdownGlog() {
  google::FlushLogFiles(google::GLOG_INFO);
  google::ShutdownGoogleLogging();
}

}  // namespace logger

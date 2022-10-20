#include <gflags/gflags.h>
#include <glog/logging.h>

#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

void InitGlog(const char* argv0) {
  FLAGS_log_dir = "../log";
  FLAGS_alsologtostderr = true;
  FLAGS_colorlogtostderr = true;
  FLAGS_stderrthreshold = google::GLOG_INFO;
  google::SetLogFilenameExtension(".log");
  google::InitGoogleLogging(argv0);
}

void ShutdownGlog() {
  google::FlushLogFiles(google::GLOG_INFO);
  google::ShutdownGoogleLogging();
}

int main(int argc, char* argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  InitGlog(argv[0]);

  ShutdownGlog();
  return 0;
}

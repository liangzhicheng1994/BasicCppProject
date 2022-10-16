cmake_minimum_required(VERSION 3.10)

project(BasicCppProject VERSION 1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(Boost_DIR /opt/pkgs/lib/cmake/Boost-1.80.0)
find_package(Boost 1.80.0 REQUIRED COMPONENTS filesystem)

set(Poco_DIR /opt/pkgs/lib/cmake/Poco)
find_package(Poco REQUIRED Foundation)

set(gflags_DIR /opt/pkgs/lib/cmake/gflags)
find_package(gflags REQUIRED)

set(glog_DIR /opt/pkgs/lib/cmake/glog)
find_package(glog 0.6.0 REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)

aux_source_directory(${PROJECT_SOURCE_DIR}/src DIR_SRCS)
add_executable(app ${DIR_SRCS})

target_link_libraries(app Poco::Foundation gflags glog::glog)

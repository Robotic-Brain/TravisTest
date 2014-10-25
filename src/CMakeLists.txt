cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(TravisTest_project)

set(TravisTest_SRCS "")

add_subdirectory(lib)

###########################
# Configure Files
###########################
if($ENV{TRAVIS})
    set(GIT_SHA1 $ENV{TRAVIS_BUILD_COMMIT})
else()
    set(GIT_SHA1 "no-travis!")
endif()
configure_file(BuildInfo.hpp.in BuildInfo.hpp ESCAPE_QUOTES @ONLY)
include_directories("${PROJECT_BINARY_DIR}")

###########################
# Final Product
###########################
add_executable(TravisTest main.cpp ${TravisTest_SRCS})

###########################
# Testing
###########################
enable_testing()
add_test(test_basic TravisTest)

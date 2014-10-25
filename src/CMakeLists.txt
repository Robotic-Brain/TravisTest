cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(TravisTest_project)

set(TravisTest_SRCS "")

add_subdirectory(lib)
include_directories(lib)

add_executable(TravisTest main.cpp ${TravisTest_SRCS})

###########################
# Testing
###########################
enable_testing()
add_test(test_basic TravisTest)

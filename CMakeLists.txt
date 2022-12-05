cmake_minimum_required(VERSION 3.23)
project (GIT)

set(CMAKE_CXX_STANDARD 14)

add_executable(GIT main.cpp Tests.cpp for_func.h for_func.cpp)

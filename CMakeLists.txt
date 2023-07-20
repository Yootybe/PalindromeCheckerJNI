cmake_minimum_required(VERSION 3.10)
project(palindromechecker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES PalindromeChecker.h PalindromeChecker.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE $ENV{JAVA_HOME}/include)
target_include_directories(${PROJECT_NAME} PRIVATE $ENV{JAVA_HOME}/include/linux)
cmake_minimum_required(VERSION 3.10)
project(CircleProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(CircleProject src/circle.cpp src/tasks.cpp test/tests.cpp)

# Подключение Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(CircleProject ${GTEST_LIBRARIES} pthread)
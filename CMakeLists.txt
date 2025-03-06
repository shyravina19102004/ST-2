cmake_minimum_required(VERSION 3.10)
project(CircleProject)

# Опция для включения тестов
option(BUILD_TESTS "Build tests" ON)

# Добавляем src и test директории
add_subdirectory(src)

if (BUILD_TESTS)
  add_subdirectory(test)
endif()
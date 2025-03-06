cmake_minimum_required(VERSION 3.10)
project(CircleProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

# Укажите все исходные файлы
set(SOURCES
    src/circle.cpp
    src/main.cpp  # Используем main.cpp вместо tasks.cpp
    test/tests.cpp
)

# Создайте исполняемый файл
add_executable(CircleProject ${SOURCES})

# Подключите Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(CircleProject ${GTEST_LIBRARIES} pthread)
# Устанавливаем пути к исходным файлам тестов
set(tests_src tests.cpp)

# Подключаем Google Test
find_package(GTest REQUIRED)

# Создаём исполняемый файл для тестов
add_executable(CircleProject_test
  ${tests_src})

# Связываем тесты с библиотекой и Google Test
target_link_libraries(CircleProject_test
  PRIVATE CircleProject_lib GTest::GTest GTest::Main)

# Добавляем тесты в CTest
add_test(NAME CircleProject_test
  COMMAND CircleProject_test)
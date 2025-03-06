# Устанавливаем пути к исходным файлам тестов
set(tests_src tests.cpp)

# Подключаем Google Test
find_package(GTest REQUIRED)

# Создаём исполняемый файл для тестов с именем ST-2.test
add_executable(ST-2.test
  ${tests_src})

# Связываем тесты с библиотекой и Google Test
target_link_libraries(ST-2.test
  PRIVATE CircleProject_lib GTest::GTest GTest::Main)

# Добавляем тесты в CTest
add_test(NAME ST-2.test
  COMMAND ST-2.test)
# Устанавливаем пути к исходным файлам тестов
set(tests_src tests.cpp)

# Создаём исполняемый файл для тестов
add_executable(${PROJECT_NAME}_test
  ${tests_src})

# Связываем тесты с библиотекой и Google Test
target_link_libraries(${PROJECT_NAME}_test
  PRIVATE ${PROJECT_NAME}_lib GTest::GTest GTest::Main)

# Добавляем тесты в CTest
add_test(NAME ${PROJECT_NAME}_test
  COMMAND ${PROJECT_NAME}_test)
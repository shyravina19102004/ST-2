# Устанавливаем пути к заголовочным файлам
set(header_path "${${PROJECT_NAME}_SOURCE_DIR}/include")
set(circle_header ${header_path}/circle.h)
set(tasks_header ${header_path}/tasks.h)

# Устанавливаем пути к исходным файлам
set(circle_src circle.cpp)
set(tasks_src tasks.cpp)
set(main_src main.cpp)

# Создаём библиотеку
add_library(${PROJECT_NAME}_lib STATIC
  ${circle_header}
  ${circle_src}
  ${tasks_header}
  ${tasks_src})

# Указываем директории для включения заголовочных файлов
target_include_directories(${PROJECT_NAME}_lib
  PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
         ${${PROJECT_NAME}_SOURCE_DIR}/include)

# Создаём исполняемый файл для main.cpp
add_executable(${PROJECT_NAME}
  ${main_src})

# Связываем исполняемый файл с библиотекой
target_link_libraries(${PROJECT_NAME}
  PRIVATE ${PROJECT_NAME}_lib)

# Подключаем Google Test (если тесты включены)
if (BUILD_TESTS)
  enable_testing()
endif()
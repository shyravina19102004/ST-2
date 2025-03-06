set(header_path "${${PROJECT_NAME}_SOURCE_DIR}/include")
set(header ${header_path}/circle.h)
set(src circle.cpp)
set(headers ${header_path}/circle.h ${header_path}/tasks.h)
set(srcs circle.cpp tasks.cpp)

add_library(${PROJECT_NAME} SHARED
  ${header}
  ${src})
  ${headers}
  ${srcs})

target_include_directories(${PROJECT_NAME}
  PUBLIC ${CMAKE_CURRENT_BINARY_DIR}

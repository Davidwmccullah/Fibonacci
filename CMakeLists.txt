cmake_minimum_required(VERSION 3.21.3)
project(fibonacci)

set(CMAKE_C_FLAGS "-Wall -Werror -lgmp")

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(fib SHARED src/fib.c)

add_executable(${PROJECT_NAME} src/fib.c)
target_compile_definitions(${PROJECT_NAME} PRIVATE)
target_link_libraries(${PROJECT_NAME} fib)
cmake_minimum_required(VERSION 3.11)
project(BlockingQueue)

add_compile_options(-Wall -Wextra -Wpedantic)

add_compile_options(-fmessage-length=80 -fno-diagnostics-show-option
    -fstack-protector-all -g -O3 -std=c++17 -Walloc-zero -Walloca
    -Wctor-dtor-privacy -Wduplicated-cond -Wduplicated-branches
    -Werror -Wextra-semi -Wfatal-errors -Winit-self -Wlogical-op
    -Wold-style-cast -Wshadow -Wunused-const-variable=1
    -Wzero-as-null-pointer-constant)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
include_directories(${PROJECT_NAME} ./include)
add_library(${PROJECT_NAME} src/BlockingQueue.cc)

find_package(Catch2 3 REQUIRED PATHS $ENV{HOME}/Applications/Catch2)
add_executable(tests test/test.cc)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain ${PROJECT_NAME})
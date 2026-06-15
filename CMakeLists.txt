cmake_minimum_required(VERSION 3.30)
project(snake)

set(CMAKE_CXX_STANDARD 20)
add_executable(snake main.cpp)

target_link_libraries(snake sfml-graphics sfml-window sfml-system sfml-audio)

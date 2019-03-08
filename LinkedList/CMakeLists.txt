cmake_minimum_required(VERSION 3.13)
project(LinkedList C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
include_directories(include)

file(GLOB SRC "src/*.c")

add_executable(LinkedList ${SRC})
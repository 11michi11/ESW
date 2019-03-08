cmake_minimum_required(VERSION 3.13)
project(Exercise2 C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
include_directories(include)

#set(SRC src/main.c src/addition.c src/subtraction.c src/multiplication.c)

file(GLOB SRC "src/*.c")

#add_executable(Exercise2 src/main.c src/addition.c include/addition.h src/multiplication.c include/multiplication.h src/subtraction.c src/subtraction.c)
add_executable(Exercise2 ${SRC})
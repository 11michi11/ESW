cmake_minimum_required(VERSION 3.13)
project(TDDTest)

set(CMAKE_C_STANDARD 11)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

include_directories(include)
file(GLOB SRC "src/*.c")
file(GLOB TEST "test/*.cpp")

add_executable(TDDTest ${SRC})

# include CppUTest headers
include_directories($ENV{CPPUTEST_HOME}/include)

# add cpputest library
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
        IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/src/CppUTest/libCppUTest.a)


add_executable(Test ${TEST})
target_link_libraries(Test imp_cpputest)
project(Test)


set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
#include project source
include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../src)
link_directories(${PROJECT_SOURCE_DIR}/../src)
add_subdirectory(${PROJECT_SOURCE_DIR}/../src build)
file(GLOB SRC "../src/*.c")

# include CppUTest headers
include_directories($ENV{CPPUTEST_HOME}/include)

# add cpputest library
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
        IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/src/CppUTest/libCppUTest.a)


add_executable(RunAllTests RunAllTests.cpp TestCelcius.cpp ../src/library.c)
target_link_libraries(RunAllTests imp_cpputest Test)

#include <stdio.h>
#include "my_string_func.h"

#define MAX_LENGTH 1000

void test_copy();
void test_len();
void test_diff();
void test_line();

int main() {

    test_copy();

    return 0;
}

void test_copy(){

    char* a = "Copy me";
    char* b;

    my_strcpy(a, b);
    printf("Copied %s", b);

}

void test_len(){

    char* a = "12345678911";
    int result = my_strlen(a);
    printf("Result %d", result);

}

void test_diff(){
    char* a = "Hello World";
    char* b = "Hello, World";

    int result = my_strdiff(a, b);

    printf("Result is %d", result);
}

void test_line(){
    char line[MAX_LENGTH];
    char upper[MAX_LENGTH];
    int line_length;

    while (0 != (line_length  = read_line(line))) {
        my_to_upper(line, upper);
        printf("Length: %d\t%s\n", line_length, upper);
    }
}
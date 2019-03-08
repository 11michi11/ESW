#include <stdio.h>
#include "library.h"

void hello(void) {
    printf("Hello, World!\n");
}


int convertFahrToCelcius(int fahr){
    int celcious = 5 * (fahr - 32 / 9);
    return celcious;
}
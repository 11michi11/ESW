#include <stdio.h>

void one();

void two();

int power(int a, int b);

void multiSwap(int *x, int *y, int *z);


int main() {
    int x = 1, y = 2, z = 3;
    multiSwap(&x, &y, &z);
    printf("%d, %d, %d", x, y, z);
    return 0;
}

int power(int a, int b) {
    int y = 1;
    while (1) {
        int temp = b % 2;
        b = b / 2;

        if (temp == 1)
            y *= a;

        if (b == 0)
            break;

        a *= a;
    }
    return y;
}

void multiSwap(int *x, int *y, int *z){
    int tmp1 = x;
    x = y;
    y = z;
    z = tmp1;


}


void two() {
    char text[] = "The quick brown fox jump over lazy dog";
    char *ends = text + 38;

    printf("the string now says: %s\n", text);

    *ends = '\0';
    printf("the string now says: %s\n", text);

    ends -= 1;
    *ends = '\0';
    printf("the string now says: %s\n", text);

    ends -= 5;
    *ends = '\0';
    printf("the string now says: %s\n", text);

    ends -= 14;
    *ends = '\0';
    printf("the string now says: %s\n", text);
}


void one() {
    int a = 7 / 3;
    int b = 7 % 3;

    printf("Division %d\nModulo %d\n", a, b);

    double c = 7.0 / 3.0;

    puts("-------------------\n");
    printf("Division %f\n", c);
}



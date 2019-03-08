#include <stdio.h>
#include <stdlib.h>
#include "my_string_func.h"

int read_line(char s[]) {
    int c = 0;
    int i = 0;
    int done = 0;
    do {
        c = getchar();
        if (c == EOF || c == '\n')
            done = 1;
        else
            s[i++] = c;
    } while (!done);
    s[i] = '\0';
    return i;
}

void my_to_upper(char *str_in, char *str_out) {
    int i = 0;
    char c = str_in[i];
    while (c != '\0') {
        if (c >= 'a' && c <= 'z')
            str_out[i] = c - 32;
        else
            str_out[i] = c;
        c = str_in[++i];
    }
    str_out[i] = '\0';
}


int my_strdiff(char *str_a, char *str_b) {

    if (str_a == NULL && str_b == NULL)
        return 0;
    else if (str_a == NULL ^ str_b == NULL)
        return -1;


    for (int i = 0; str_a[i] != '\0' || str_b[i] != '\0'; i++)
        if (str_a[i] != str_b[i])
            return -1;

    return 0;
}

int my_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

void my_strcpy(char *str_in, char *str_out) {
    int i = 0;
    while (str_in[i] != '\0') {
        str_out[i] = str_in[i];
        i++;
    }
    str_out[i] = '\0';

}

char *ft_strdup(char *src) {
    char *str;



    return str;
}
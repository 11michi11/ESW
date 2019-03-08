#pragma once

typedef struct student {
    char *first_name;
    char *last_name;
    int via_id;
    char *nationality;
} student_t;

//USES MALLOC
student_t* init_student(char *first_name, char *last_name, int via_id, char *nationality);
void print_student(student_t *student);
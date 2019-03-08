#include <stdio.h>
#include <stdlib.h>
#include "student.h"


void print_student(student_t *student) {
    printf("Student: %s %s, VIA ID: %d, Nationality: %s\n",
           student->first_name, student->last_name, student->via_id, student->nationality);
}

//USES MALLOC
student_t *init_student(char *first_name, char *last_name, int via_id, char *nationality) {
    student_t *student1 = (student_t *) malloc(sizeof(student_t));
    student1->first_name = first_name;
    student1->last_name = last_name;
    student1->via_id = via_id;
    student1->nationality = nationality;
}


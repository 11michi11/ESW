#include <stdlib.h>
#include <stdio.h>
#include "student.h"
#include "linked_list.h"
#include <string.h>


student_t *find_student_in_list_by_via_id(lin_list_t *list, int via_id);

void print_students_in_list(lin_list_t *list);

void test_list();

student_t *find_student_in_list_by_last_name(lin_list_t *list, char *last_name);

void test_list_with_student();

int main() {
    test_list_with_student();
}

void test_list() {
    lin_list_t *list = (lin_list_t *) malloc(sizeof(lin_list_t));

    add_item(list, (void *) 5);
    printf("1. Added 5, size %d\n", no_of_items(list));

    add_item(list, (void *) 1);
    add_item(list, (void *) 2);
    add_item(list, (void *) 3);
    add_item(list, (void *) 4);
    add_item(list, (void *) 5);

    printf("2. Added 5 more numbers, size %d\n", no_of_items(list));
    printf("3. Number at index 3: %d\n", (int) get_item(list, 3));

    remove_item(list, (void *) 3);
    printf("4. Removed number 3, size: %d\n", no_of_items(list));
    printf("5. Number at index 3: %d\n", (int) get_item(list, 3));

    free(list);
    list = NULL;
}

void test_list_with_student() {
    lin_list_t *list = init_lin_list();

    student_t *student1 = init_student("Michał", "Pompa", 266494, "Polish");
    student_t *student2 = init_student("Michaela", "Golhova", 266099, "Slovak");
    student_t *student3 = init_student("Matej", "Michalek", 266503, "Slovak");
    student_t *student4 = init_student("Johny", "Test", 266666, "Testland");
    student_t *student5 = init_student("Error", "Man", -1, "Segmentation Fault");


    add_item(list, (void *) student1);
    printf("1. Added student1, size %d\n", no_of_items(list));

    add_item(list, (void *) student2);
    add_item(list, (void *) student3);
    add_item(list, (void *) student4);
    add_item(list, (void *) student5);

    printf("1.5 All students: ");
    print_students_in_list(list);

    printf("2. Added 5 more students, size %d\n", no_of_items(list));
    printf("3. Student at index 3: ");
    print_student(get_item(list, 3));

    remove_item(list, (void *) student4);
    printf("4. Removed student 4, size: %d\n", no_of_items(list));
    printf("5. Student at index 3:");
    print_student(get_item(list, 3));

    printf("6. Find student by VIA ID 266099: ");
    student_t * found = find_student_in_list_by_via_id(list, 266099);
    print_student(found);

    printf("7. Find student by last name Michalek: ");
    found = find_student_in_list_by_last_name(list, "Michalek");
    print_student(found);

    free(list);
    list = NULL;
    free(student1);
    student1 = NULL;
    free(student2);
    student2 = NULL;
    free(student3);
    student3 = NULL;
    free(student4);
    student4 = NULL;
    free(student5);
    student5 = NULL;
}

void print_students_in_list(lin_list_t *list) {
    if (no_of_items(list) == 0)
        return;

    uint16_t index = 0;
    student_t *current = get_item(list, index);
    while (current != NULL) {
        print_student(current);
        index++;
        current = get_item(list, index);
    }
}

student_t *find_student_in_list_by_via_id(lin_list_t *list, int via_id) {
    if (no_of_items(list) == 0)
        return NULL;

    uint16_t index = 0;
    student_t *current = get_item(list, index);
    while (current != NULL) {
        if (current->via_id == via_id)
            return current;

        index++;
        current = get_item(list, index);
    }

    return NULL;
}

student_t *find_student_in_list_by_last_name(lin_list_t *list, char *last_name) {
    if (no_of_items(list) == 0)
        return NULL;

    uint16_t index = 0;
    student_t *current = get_item(list, index);
    while (current != NULL) {
        if (strcmp(current->last_name, last_name) == 0)
            return current;

        index++;
        current = get_item(list, index);
    }

    return NULL;
}


#pragma once
#include <stdint.h>

typedef struct linked_node {
    void *value;
    struct linked_node *next;
} node_t;

typedef struct linked_list {
    node_t* first;
    int size;
} lin_list_t;

int add_item(lin_list_t* list, void* item); //Return  0 if item added else -1
void* get_item(lin_list_t* list, uint16_t index); // Return pointer to item at given index in the list
int no_of_items(lin_list_t* list); // Return no of items in list
int remove_item(lin_list_t* list, void* item); // Return 0 if item removed else -1
lin_list_t* init_lin_list();
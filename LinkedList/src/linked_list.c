#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//Return  0 if item added else -1
int add_item(lin_list_t *list, void *item) {
    if (list == NULL)
        return -1;

    node_t *current = list->first;
    if(current == NULL){ // Empty list, add first node
        node_t *new_node = (node_t *) malloc(sizeof(node_t));

        new_node->value = item;
        new_node->next = NULL;
        list->first = new_node;

        list->size++;
        return 0;
    }

    // Find node that doesn't have next node
    while (current->next != NULL)
        current = current->next;

    // Create new node, initialize and append to the list
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->value = item;
    new_node->next = NULL;

    current->next = new_node;

    list->size++;
    return 0;
}

// Return pointer to item at given indexin the list
void *get_item(lin_list_t *list, uint16_t index) {
    if (list == NULL)
        return NULL;

    node_t *current = list->first;
    for (int i = 0; i < index; i++)
        if (current->next == NULL)
            return NULL;
        else
            current = current->next;

    return current->value;
}

// Return no of items in list
int no_of_items(lin_list_t *list) {
    if (list == NULL)
        return -1;

    return list->size;
}

// Return 0 if item removed else -1
int remove_item(lin_list_t *list, void *item){
    if(list == NULL)
        return -1;

    node_t* current = list->first;
    if(current->next == NULL)
        return -1;

    while(current->next->value != item)
        if(current->next == NULL)
            return -1;
        else
            current = current->next;

    node_t* to_delete = current->next;
    current->next = current->next->next;

    list->size--;
    free(to_delete);
    return 0;
}

lin_list_t* init_lin_list(){
    return (lin_list_t*) malloc(sizeof(lin_list_t));
}
#include "collection.h"
#include <stdlib.h>

stack* stack_init() {
    stack* s = malloc(sizeof(stack*));
    s->size = 0;

    return s;
}

void stack_push(stack* s, void* n) {
    struct _stack_node* node = malloc(sizeof(struct _stack_node*));
    node->item = n;
    node->next = s->first;
    s->first = node;
    s->size++;
}

void* stack_pop(stack* s) {
    struct _stack_node* n = s->first;
    s->first = n->next;
    s->size--;
    void* item = n->item;
    free(n);
    return item;
}

int stack_size(stack* s) {
    return s->size;
}

void stack_destroy(stack* s) {
    free(s);

    while (s->size > 0) {
        stack_pop(s);
    }
}

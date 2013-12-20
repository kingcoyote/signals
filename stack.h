#ifndef __STACK_H_
#define __STACK_H_

struct _stack_node {
    struct _stack_node* next;
    void* item;
};

struct _stack {
    int size;
    struct _stack_node* first;
};

typedef struct _stack stack;

stack*  stack_init();
void    stack_push(stack* s, void* n);
void*   stack_pop(stack* s);
int     stack_size(stack* s);
void    stack_destroy(stack* s);

#endif

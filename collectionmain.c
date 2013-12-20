#include "collection.h"
#include <stdio.h>

int main(int argc, char **argv) {
    stack* s = stack_init();
    
    int a = 5;
    stack_push(s, &a);
    printf("size:%d\n", s->size);

    int b = 7;
    stack_push(s, &b);
    printf("size:%d\n", s->size);
    
    int c = 11;
    stack_push(s, &c);
    printf("size:%d\n", s->size);
    
    printf("%d\n", *(int*)stack_pop(s));
    printf("size:%d\n", s->size);
    
    printf("%d\n", *(int*)stack_pop(s));
    printf("size:%d\n", s->size);
    
    stack_destroy(s);

    return 0;
}


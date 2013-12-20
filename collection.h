#ifndef __COLLECTION_H_
#define __COLLECTION_H_

// Begin Stack headers

struct _stackNode {
    struct _stackNode* next;
    void* item;
};

struct _stack {
    int size;
    struct _stackNode* first;
};

typedef struct _stack stack;

stack*  stack_init();
void    stack_destroy(stack* s);
void    stack_push(stack* s, void* n);
void*   stack_pop(stack* s);
int     stack_size(stack* s);
int     stack_isEmpty(stack* s);

// Begin Queue headers

struct _queueNode {
    struct _queueNode* next;
    void* item;
};

struct _queue {
    int size;
    struct _queueNode* first;
    struct _queueNode* last;
};

typedef struct _queue queue;

queue*  queue_init();
void    queue_destroy(queue* q);
void    queue_enqueue(queue* q, void *n);
void*   queue_dequeue(queue* q);
int     queue_size(queue* q);
int     queue_isEmpty(queue* q);

// Begin Deque headers

struct _dequeNode {
    struct _dequeNode* prev;
    struct _dequeNode* next;
    void* item;
};

struct _deque {
    int size;
    struct _dequeNode* first;
    struct _dequeNode* last;
};

typedef struct _deque deque;

deque*  deque_init();
void    deque_destroy(deque* d);
void    deque_pushFront(deque* d, void* n);
void    deque_pushBack(deque* d, void* n);
void*   deque_popFront(deque* d);
void*   deque_popBack(deque* d);
int     deque_size(deque* d);
int     deque_isEmpty(deque* d);

#endif

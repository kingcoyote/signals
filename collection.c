#include "collection.h"
#include <stdlib.h>

stack* stack_init() {
    stack* s = malloc(sizeof(stack*));
    s->size = 0;

    return s;
}

void stack_destroy(stack* s) {
    while (s->size > 0) {
        stack_pop(s);
    }
    free(s);
}

void stack_push(stack* s, void* n) {
    struct _stackNode* node = malloc(sizeof(struct _stackNode*));
    node->item = n;
    node->next = s->first;
    s->first = node;
    s->size++;
}

void* stack_pop(stack* s) {
    struct _stackNode* n = s->first;
    s->first = n->next;
    s->size--;
    void* item = n->item;
    free(n);
    return item;
}

int stack_size(stack* s) {
    return s->size;
}

int stack_isEmpty(stack* s) {
    return s->size == 0;
}

queue* queue_init() {
    queue* q= malloc(sizeof(queue*));
    q->size = 0;

    return q;
}

void queue_destroy(queue* q) {
    while(!queue_isEmpty(q)) {
        queue_dequeue(q);
    }

    free(q);
}

void queue_enqueue(queue* q, void *n) {
    struct _queueNode* node = malloc(sizeof(struct _queueNode*));
    node->item = n;
    node->next = q->last;
    q->last = node;
    q->size++;
}

void* queue_dequeue(queue* q) {
    struct _queueNode* node = q->first;
    q->first = node->next;
    void* item = node->item;
    free(node);
    q->size--;
    return item;
}

int queue_size(queue* q) {
    return q->size;
}

int queue_isEmpty(queue* q) {
    return q->size == 0;
}

deque* deque_init() {
    deque* d = malloc(sizeof(deque*));
    d->size = 0;
    return d;
}

void deque_destroy(deque* d) {
    while (!deque_isEmpty(d)) {
        deque_popFront(d);
    }

    free(d);
}

void deque_pushFront(deque* d, void* n) {
    struct _dequeNode* node = malloc(sizeof(struct _dequeNode*));
    node->item = n;
    node->next = d->first;
    d->first->prev = node;
    d->first = node;
    d->size++;

    if (d->size == 1) {
        d->last = d->first;
    }
}

void deque_pushBack(deque* d, void* n) {
    struct _dequeNode* node = malloc(sizeof(struct _dequeNode*));
    node->item = n;
    node->prev = d->last;
    d->last->next = node;
    d->last = node;
    d->size++;

    if (d->size == 1) {
        d->first = d->last;
    }
}

void* deque_popFront(deque* d) {
    struct _dequeNode* node = d->first;
    void* item = node->item;

    d->size--;
    if (d->size > 1) {
        d->first = node->next;
    } else {
        d->first = d->last;
    }

    d->first->prev = NULL;

    free(node);

    return item;
}

void* deque_popBack(deque* d) {
    struct _dequeNode* node = d->last;
    void* item = node->item;

    d->size--;
    if (d->size > 1) {
        d->last = node->prev;
    } else {
        d->last = d->first;
    }

    d->last->next = NULL;

    free(node);

    return item;
}

int deque_size(deque* d) {
    return d->size;
}

int deque_isEmpty(deque* d) {
    return deque_size(d) == 0;
}

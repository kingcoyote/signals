#include "unionfind.h"
#include <stdlib.h>

int uf_quickunion_getroot(uf_quickunion*, int);
int uf_weighted_getroot(uf_weighted*, int);
int uf_weightedpc_getroot(uf_weightedpc*, int);

// quickfind algorithm

uf_quickfind *uf_quickfind_init(int n) {
    int i;
    uf_quickfind *uf = malloc(sizeof(uf_quickfind));
    int id[n];

    uf->id = id;
    uf->length = n;

    for(i = 0; i < n; i++) {
        uf->id[i] = i;
    }

    return uf;
}

void uf_quickfind_union(uf_quickfind *uf, int p, int q) {
    int pid = uf->id[p];
    int qid = uf->id[q];
    int i;

    for(i = 0; i < uf->length; i++) {
        if(uf->id[i] == pid) uf->id[i] = qid;
    }
}

char uf_quickfind_isconnected(uf_quickfind *uf, int p, int q) {
    return uf->id[p] == uf->id[q];
}

// quickunion algorithm

uf_quickunion *uf_quickunion_init(int n) {
    int i;
    uf_quickunion *uf = malloc(sizeof(uf_quickunion));
    int id[n];

    uf->id = id;
    uf->length = n;

    for(i = 0; i < n; i++) {
        uf->id[i] = i;
    }

    return uf;
}

void uf_quickunion_union(uf_quickunion *uf, int p, int q) {
    int proot = uf_quickunion_getroot(uf, p);
    int qroot = uf_quickunion_getroot(uf, q);
    
    uf->id[proot] = uf->id[qroot];
}

char uf_quickunion_isconnected(uf_quickunion *uf, int p, int q) {
    int proot = uf_quickunion_getroot(uf, p);
    int qroot = uf_quickunion_getroot(uf, q);

    return proot == qroot;
}

int uf_quickunion_getroot(uf_quickunion *uf, int i) {
    while(uf->id[i] != i) {
        i = uf->id[i];
    }

    return i;
}

// weighted quickunion algorithm

uf_weighted *uf_weighted_init(int n) {
    int i;
    uf_weighted *uf = malloc(sizeof(uf_weighted));
    int id[n];

    uf->id = id;
    uf->length = n;

    for(i = 0; i < n; i++) {
        uf->id[i] = i;
        uf->size[i] = 1;
    }

    return uf;
}

void uf_weighted_union(uf_weighted *uf, int p, int q) {
    int proot = uf_weighted_getroot(uf, p);
    int qroot = uf_weighted_getroot(uf, q);
    
    if(uf->size[proot] < uf->size[qroot]) {
        uf->id[proot] = qroot;
        uf->size[qroot] += uf->size[proot];
    } else {
        uf->id[qroot] = uf->id[proot];
        uf->size[proot] += uf->size[qroot];
    }
}

char uf_weighted_isconnected(uf_weighted *uf, int p, int q) {
    int proot = uf_weighted_getroot(uf, p);
    int qroot = uf_weighted_getroot(uf, q);

    return proot == qroot;
}

int uf_weighted_getroot(uf_weighted *uf, int i) {
    while(uf->id[i] != i) {
        i = uf->id[i];
    }

    return i;
}

// weighted quickunion algorithm with path compression

uf_weightedpc *uf_weightedpc_init(int n) {
    int i;
    uf_weightedpc *uf = malloc(sizeof(uf_weightedpc));
    int id[n];

    uf->id = id;
    uf->length = n;

    for(i = 0; i < n; i++) {
        uf->id[i] = i;
        uf->size[i] = 1;
    }

    return uf;
}

void uf_weightedpc_union(uf_weightedpc *uf, int p, int q) {
    int proot = uf_weightedpc_getroot(uf, p);
    int qroot = uf_weightedpc_getroot(uf, q);
    
    if(uf->size[proot] < uf->size[qroot]) {
        uf->id[proot] = qroot;
        uf->size[qroot] += uf->size[proot];
    } else {
        uf->id[qroot] = uf->id[proot];
        uf->size[proot] += uf->size[qroot];
    }
}

char uf_weightedpc_isconnected(uf_weightedpc *uf, int p, int q) {
    int proot = uf_weightedpc_getroot(uf, p);
    int qroot = uf_weightedpc_getroot(uf, q);

    return proot == qroot;
}

int uf_weightedpc_getroot(uf_weightedpc *uf, int i) {
    while(uf->id[i] != i) {
        i = uf->id[i];
        uf->id[i] = uf->id[uf->id[i]];
    }

    return i;
}

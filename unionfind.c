#include "unionfind.h"
#include <stdlib.h>

int uf_weighted_getroot(uf_weighted*, int);
int uf_weightedpc_getroot(uf_weightedpc*, int);

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

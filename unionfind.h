#ifndef _UNIONFIND_H_
#define _UNIONFIND_H_

typedef struct {
    int length;
    int* id;
} uf_quickfind;

typedef struct {
    int length;
    int* id;
} uf_quickunion;

typedef struct {
    int length;
    int* id;
    int* size;
} uf_weighted;

typedef struct {
    int length;
    int* id;
    int* size;
} uf_weightedpc;

uf_quickfind *uf_quickfind_init(int);
void uf_quickfind_union(uf_quickfind*, int, int);
char uf_quickfind_isconnected(uf_quickfind*, int, int);

uf_quickunion *uf_quickunion_init(int);
void uf_quickunion_union(uf_quickunion*, int, int);
char uf_quickunion_isconnected(uf_quickunion*, int, int);

uf_weighted *uf_weighted_init(int);
void uf_weighted_union(uf_weighted*, int, int);
char uf_weighted_isconnected(uf_weighted*, int, int);

uf_weightedpc *uf_weightedpc_init(int);
void uf_weightedpc_union(uf_weightedpc*, int, int);
char uf_weightedpc_isconnected(uf_weightedpc*, int, int);

#endif

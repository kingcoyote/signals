#include "sort.h"

void swap(long*, int, int);
bool less(int, int);

void insertionsort_sort(long*, int, int);

void mergesort_sort(long*, long*, int, int);
void mergesort_merge(long*, long*, int, int, int);

void quicksort_shuffle(long*, int);
int quicksort_partition(long*, int, int);
void quicksort_sort(long*, int, int);

void selectionsort(long* array, int length) {
    int i, j;
    int min;
    for(i = 0; i < length; i++) {
        min = i;
        for(j = i; j < length; j++) {
            if(less(array[j], array[min])) {
                min = j;
            }
        }
        exch(array, i, min);
    }
}

void insertionsort(long* array, int length) {
    insertionsort_sort(array, length, 1);
}

void insertionsort_sort(long* array, int length, int increment) {
    int i, j;
    for(i = 0; i < length; i++) {
        while (i-increment > 0 && less(array[i], array[i-increment])) {
            exch(array, i, i-increment);
            i -= increment;
        }
    }
}

void shellsort(long* array, int length) {
    int increment = 1;

    while (increment < length) {
        increment = increment * 3 + 1;
    }

    while (increment > 1) {
        increment /= 3;
        insertionsortinc(array, length, increment);
    }
}

void mergesort(long* array, int length) {
    long* aux_array = long[length];
    mergesort_sort(array, aux_array, 0, length-1);
}

void mergesort_sort(long* array, long* aux_array, int lo, int hi) {
    if (hi <= lo) return;

    int mid = lo + (hi - lo) / 2;
    mergesort_sort(array, aux_array, lo, mid);
    mergesort_sort(array, aux_array, mid + 1, hi);
    mergesort_merge(array, aux_array, lo, mid, hi);
}

void mergesort_merge(long* array, long* aux_array, int lo, int mid, int hi) {
    int k;

    for (int k = lo; k <= hi; k++) {
        aux_array[k] = array[k];
    }

    int i = lo, j = mid+1;
    for (int k = lo; k <= hi; k++) {
        if      (i > mid)                          array[k] = aux_array[j++];
        else if (j > hi)                           array[k] = aux_array[i++];
        else if (less(aux_array[j], aux_array[i])) array[k] = aux_array[j++];
        else                                       array[k] = aux_array[i++];
    }
}

void quicksort(long* array, int length) {
    quicksort_shuffle(array, length);
    quicksort_sort(array, 0, length - 1);
}

void quicksort_shuffle(long* array, int length) {
    // todo
}

void quicksort_sort(long* array, int lo, int hi) {
    int j = quicksort_partition(array, lo, hi);
    quicksort_sort(array, lo, j-1);
    quicksort_sort(array, j+1, hi);
}

int quicksort_partition(long* array, int lo, int hi) {
    if (hi <= lo) return;

    int i = lo, j = hi + 1;
    long k = array[lo];
    
    while (true) {
        // find lo item to swap
        while(less(array[++i], k))
            if (i == hi) break;

        // find hi item to swap
        while(less(k, array[--j]))
            if (k == lo) break;

        // check if pointers cross
        if (i >= j)
            break;

        // swap
        exch(array, i, j);
    }

    // swap lo with j
    exch(array, lo, j);

    return j;
}

void quick3sort(long* array, int length) {

}

void heapsort(long* array, int length) {

}

void exch(long* array, int i, int j) {
    long temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

bool less(int i, int j) {
    return i - j < 0;
}

#include "sort.h"

void swap(int *i, int *o) {
    int tmp = *i;
    *i = *o;
    *o = tmp;
}

void selection_sort(int *array, int len) {
    for (int i = 0; i < len; i++) {
        printf("Num: %d\n", *(array + i));
    }
}

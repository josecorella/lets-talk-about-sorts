#include "sort.h"

void swap(int *i, int *o) {
    int tmp = *i;
    *i = *o;
    *o = tmp;
}

void selection_sort(int *array, int len) {
    int min_index;

    for (int i = 0; i < len; i++) {
        min_index = i;
        for (int j = i + 1; j < len; j++) {
            if (*(array + j) < *(array + min_index)) {
                min_index = j;
            }
        }
        swap(&array[min_index], &array[i]);
    }
}

void bubble_sort(int *array, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (*(array + j) > *(array + (j+1))) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void print_array(char *sort, int *array, int len) {
    printf("%s: ", sort);
    for (int i = 0; i < len; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

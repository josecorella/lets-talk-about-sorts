#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"
#include "logger.h"


void load_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        *(array + i) = rand() % 1000;
    }
}


int main (int argc, char** argv) {
    int arr_size = 25;
    int sort_array[arr_size];
    int len = sizeof(sort_array)/sizeof(int);
    time_t t;
    srand((unsigned) time(&t));

    load_array(sort_array, arr_size);

    /* Selection Sort */
    print_array("before selection sort", sort_array, len);
    selection_sort(sort_array, len);
    print_array("after selection sort", sort_array, len);
    
    printf("\n");
    load_array(sort_array, arr_size);

    /* Bubble Sort */
    print_array("before bubble sort", sort_array, len);
    bubble_sort(sort_array, len);
    print_array("after bubble sort", sort_array, len);
    
    printf("\n");
    load_array(sort_array, arr_size);

    /* Insertion Sort */
    print_array("before insertion sort", sort_array, len);
    insertion_sort(sort_array, len);
    print_array("after insertion sort", sort_array, len);
    
    printf("\n");
    load_array(sort_array, arr_size);

    /* Merge Sort */
    print_array("before merge sort", sort_array, len);
    merge_sort(sort_array, 0, len - 1);
    print_array("after merge sort", sort_array, len);

    return 0;
}

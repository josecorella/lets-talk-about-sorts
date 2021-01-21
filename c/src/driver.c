#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"


void load_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        *(array + i) = rand() % 1000;
    }
}


int main (int argc, char** argv) {
    int arr_size = 25;
    int sort_array[arr_size];
    time_t t;
    srand((unsigned) time(&t));

    load_array(sort_array, arr_size);

    /* Selection Sort */
    print_array("before selection sort", sort_array, sizeof(sort_array)/sizeof(int));
    selection_sort(sort_array, sizeof(sort_array)/sizeof(int));
    print_array("after selection sort", sort_array, sizeof(sort_array)/sizeof(int));
    
    printf("\n");
    load_array(sort_array, arr_size);

    /* Bubble Sort */
    print_array("before bubble sort", sort_array, sizeof(sort_array)/sizeof(int));
    bubble_sort(sort_array, sizeof(sort_array)/sizeof(int));
    print_array("after bubble sort", sort_array, sizeof(sort_array)/sizeof(int));
    
    printf("\n");
    load_array(sort_array, arr_size);

    /* Insertion Sort */
    print_array("before insertion sort", sort_array, sizeof(sort_array)/sizeof(int));
    insertion_sort(sort_array, sizeof(sort_array)/sizeof(int));
    print_array("after insertion sort", sort_array, sizeof(sort_array)/sizeof(int));
    

    return 0;
}

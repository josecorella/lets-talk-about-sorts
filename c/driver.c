#include <stdio.h>

#include "sort.h"

int main (int argc, char** argv) {
    /* Selection Sort */
    int sel_sort_arr10[10] = {4, 10, 2, 708, 66, 44, 1, 23, 7, 2};
    print_array("before selection sort", sel_sort_arr10, sizeof(sel_sort_arr10)/sizeof(int));
    selection_sort(sel_sort_arr10, sizeof(sel_sort_arr10)/sizeof(int));
    print_array("after selection sort", sel_sort_arr10, sizeof(sel_sort_arr10)/sizeof(int));
    
    printf("\n");

    /* Bubble Sort */
    int bubble_sort_arr[10] = {4, 10, 2, 7, 99, 100, 1, 42, 34, 23};
    print_array("before bubble sort", bubble_sort_arr, sizeof(bubble_sort_arr)/sizeof(int));
    bubble_sort(bubble_sort_arr, sizeof(bubble_sort_arr)/sizeof(int));
    print_array("after bubble sort", bubble_sort_arr, sizeof(bubble_sort_arr)/sizeof(int));
    
    printf("\n");

    /* Insertion Sort */
    int insert_sort[10] = {4, 10, 2, 7, 99, 100, 1, 42, 34, 23};
    print_array("before insertion sort", insert_sort, sizeof(insert_sort)/sizeof(int));
    insertion_sort(insert_sort, sizeof(insert_sort)/sizeof(int));
    print_array("after insertion sort", insert_sort, sizeof(insert_sort)/sizeof(int));
    

    return 0;
}

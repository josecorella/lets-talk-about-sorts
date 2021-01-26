#include <iostream>

#include "sort.h"

using namespace std;

void load_array(int *array, int len) {
    for (int i = 0; i < len; i++) {
        *(array + i) = rand() % 1000;
    }
}
int main(int argc, char **argv) {
    int arr_size = 25;
    int sort_array[arr_size];
    int size = sizeof(sort_array) / sizeof(int);
    time_t t;
    srand((unsigned) time(&t));

    load_array(sort_array, arr_size);

    /* Selection Sort */
    print_array("Before Bubble sort", sort_array, size);
    selection_sort(sort_array, size);
    print_array("After Bubble sort", sort_array, size);

    cout << endl;
    load_array(sort_array, arr_size);

    /* Bubble Sort */
    print_array("Before Bubble sort", sort_array, size);
    bubble_sort(sort_array, size);
    print_array("After Bubble sort", sort_array, size);
    
    cout << endl;
    load_array(sort_array, arr_size);
    
    /* Insertion Sort */
    print_array("Before Insertion sort", sort_array, size);
    bubble_sort(sort_array, size);
    print_array("After Insertion sort", sort_array, size);
    
    cout << endl;
    load_array(sort_array, arr_size);

    /* Merge Sort */
    print_array("Before Merge sort", sort_array, size);
    merge_sort(sort_array, 0, size);
    print_array("After Merge sort", sort_array, size);
    return 0;
}

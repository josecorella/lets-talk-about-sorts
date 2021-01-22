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
    time_t t;
    srand((unsigned) time(&t));

    load_array(sort_array, arr_size);

    /* Selection Sort */
    print_array("Before Bubble sort", sort_array, sizeof(sort_array) / sizeof(int));
    selection_sort(sort_array, sizeof(sort_array) / sizeof(int));
    print_array("After Bubble sort", sort_array, sizeof(sort_array) / sizeof(int));

    cout << endl;
    load_array(sort_array, arr_size);

    /* Bubble Sort */
    print_array("Before Bubble sort", sort_array, sizeof(sort_array) / sizeof(int));
    bubble_sort(sort_array, sizeof(sort_array) / sizeof(int));
    print_array("After Bubble sort", sort_array, sizeof(sort_array) / sizeof(int));
    
    cout << endl;
    load_array(sort_array, arr_size);
    
    /* Insertion Sort */
    print_array("Before Insertion sort", sort_array, sizeof(sort_array) / sizeof(int));
    bubble_sort(sort_array, sizeof(sort_array) / sizeof(int));
    print_array("After Insertion sort", sort_array, sizeof(sort_array) / sizeof(int));

    return 0;
}

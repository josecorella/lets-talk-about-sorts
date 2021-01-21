#include <iostream>

#include "sort.h"

using namespace std;

int main(int argc, char **argv) {
    /* Selection Sort */
    int sel_sort_arr10[] = {4, 10, 2, 708, 66, 44, 1, 23, 7, 2};
    print_array("Before Bubble sort", sel_sort_arr10, sizeof(sel_sort_arr10) / sizeof(int));
    selection_sort(sel_sort_arr10, sizeof(sel_sort_arr10) / sizeof(int));
    print_array("After Bubble sort", sel_sort_arr10, sizeof(sel_sort_arr10) / sizeof(int));

    cout << endl;

    /* Bubble Sort */
    int bubble_sort_arr[10] = {4, 10, 2, 7, 99, 100, 1, 42, 34, 23};
    print_array("Before Bubble sort", bubble_sort_arr, sizeof(bubble_sort_arr) / sizeof(int));
    bubble_sort(bubble_sort_arr, sizeof(bubble_sort_arr) / sizeof(int));
    print_array("After Bubble sort", bubble_sort_arr, sizeof(bubble_sort_arr) / sizeof(int));
    return 0;
}
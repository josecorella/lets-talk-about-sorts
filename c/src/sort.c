#include "sort.h"
#include "logger.h"

void merge(int *array, int l, int m, int r);

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

void insertion_sort(int *array, int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = *(array + i);
        j = i - 1;

        while (j >= 0 && *(array + j) > key) {
            *(array + (j + 1)) = *(array + j);
            j = j - 1;
        }
        *(array + (j + 1)) = key;
    }
}

void merge_sort(int *array, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(array, l, m); //left to middle
        merge_sort(array, m + 1, r); //middle + 1 to the right
    
        merge(array, l, m, r); //merge the subarrays
    }
}

void merge(int *array, int l, int m, int r) { 
    //merge the subarrays first l...m and then m+1...r
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    
    //copy data to respective arrays O(n)
    for (i = 0; i < n1; i++) {
        *(left + i) = *(array + (l + i));
    }
    
    for (j = 0; j < n2; j++) {
        *(right + j) = *(array + (m + 1 + j));
    }
    
    i = 0;
    j = 0;
    k = l;
    
    // merge left and right
    while (i < n1 && j < n2) {
        if (*(left + i) <= *(right + j)) {
            *(array + k) = *(left + i);
            i++;
        } else {
            *(array + k) = *(right + j);
            j++;
        }
        k++;
    }

    //edge cases for if we exit the while loop prematurely
    while (i < n1) {
        array[k] = left[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        array[k] = right[j];
        j++;
        k++;
    }
}

void print_array(char *sort, int *array, int len) {
    printf("%s: ", sort);
    for (int i = 0; i < len; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

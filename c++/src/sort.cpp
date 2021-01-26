#include <algorithm>
#include <iostream>

#include "sort.h"

using namespace std;

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
            if (*(array +j) > *(array + (j + 1))) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void insertion_sort(int *array, int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = *(array + i);
        j = i -1;

        while (j >= 0 && *(array + j) > key) {
            *(array + (j + 1)) = *(array + j);
            j = j - 1;
        }
        *(array + (j + 1)) = key;
    }
}

void merge_sort(int *array, int l, int r) {
    if (l >= r) {
        return;
    }
    
    int m = (l + r - 1) / 2;
    merge_sort(array, l, m);
    merge_sort(array, m + 1, r);

    merge(array, l, m, r);
}

void merge(int *array, int l, int m, int r) {
    int i, j, k;
    int sub1 = m - l + 1;
    int sub2 = r - m;

    int left[sub1], right[sub2];
    
    for (int i = 0; i < sub1; i++) {
        *(left + i) = *(array + (l + i));
    }
    
    for (int j = 0; j < sub2; j++) {
        *(right + j) = *(array + (m + 1 + j));
    }

    i = 0;
    j = 0;
    k = l;

    // merge left and right subarrays into the array
    while (i < sub1 && j < sub2) {
        if (*(left + i) <= *(right + j)) {
            *(array + k) = *(left + i);
            i++;
        } else {
            *(array + k) = *(right + j);
            j++;
        }
        k++;
    }

    // handle edge cases
    while (i < sub1) {
        *(array + k) = *(left + i);
        i++;
        k++;
    }

    while (j < sub2) {
        *(array + k) = *(right + j);
        j++;
        k++;
    }
}

void print_array(const char *sort, int *array, int len) {
    cout << sort << " ";
    for (int i = 0; i < len; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

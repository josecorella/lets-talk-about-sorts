#include <stdio.h>

#include "sort.h"

int main (int argc, char** argv) {
    int sel_sort_arr10[10] = {4, 10, 2, 708, 66, 44, 1, 23, 7, 2};
    selection_sort(sel_sort_arr10, sizeof(sel_sort_arr10)/sizeof(int));

    return 0;
}

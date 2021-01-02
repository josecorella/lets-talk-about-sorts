#include <iostream>

#include "sort.h"

using namespace std;

int main(int argc, char **argv) {
    int sel_sort_arr10[] = {4, 10, 2, 708, 66, 44, 1, 23, 7, 2};
    print_array("selection sort", sel_sort_arr10, sizeof(sel_sort_arr10) / sizeof(int));
    selection_sort(sel_sort_arr10, sizeof(sel_sort_arr10) / sizeof(int));

    return 0;
}

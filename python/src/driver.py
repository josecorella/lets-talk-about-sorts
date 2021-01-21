import sorts


def main():
    # Selection Sort
    sel_sort = [4, 10, 2, 708, 66, 44, 1, 23, 7, 2]
    sorts.print_array("Before selection sort:", sel_sort)
    sorts.selection_sort(sel_sort)
    sorts.print_array("After selection sort:", sel_sort)

    print()

    # Bubble Sort
    bubble_sort_arr = [4, 10, 2, 7, 99, 100, 1, 42, 34, 23]
    sorts.print_array("Before Bubble sort:", bubble_sort_arr)
    sorts.bubble_sort(bubble_sort_arr)
    sorts.print_array("After Bubble sort:", bubble_sort_arr)

if __name__ == "__main__":
    main()

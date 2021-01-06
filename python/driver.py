import sorts


def main():
    sel_sort = [4, 10, 2, 708, 66, 44, 1, 23, 7, 2]
    sorts.print_array("before selection sort:", sel_sort)
    sorts.selection_sort(sel_sort)
    sorts.print_array("after selection sort:", sel_sort)


if __name__ == "__main__":
    main()

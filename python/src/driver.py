import random

import sorts

def fill_array(sort_array):
    for i in range(25):
        sort_array[i] = random.randint(0, 1000)

def main():
    sort_array = [0] * 25
    fill_array(sort_array)

    # Selection Sort
    print("Before selection sort:", sort_array, sep=" ")
    sorts.selection_sort(sort_array)
    print("After selection sort:", sort_array, sep=" ", end="\n")

    print()
    fill_array(sort_array)

    # Bubble Sort
    print("Before Bubble sort:", sort_array, sep=" ")
    sorts.bubble_sort(sort_array)
    print("After Bubble sort:", sort_array, sep=" ", end="\n")

    print()
    fill_array(sort_array)

    # Insertion Sort
    print("Before Insertion sort:", sort_array, sep=" ")
    sorts.insertion_sort(sort_array)
    print("After Insertion sort:", sort_array, sep=" ", end="\n")
    
    print()
    fill_array(sort_array)
    
    # Merge Sort
    print("Before Merge sort:", sort_array, sep=" ")
    sorts.merge_sort(sort_array)
    print("After Merge sort:", sort_array, sep=" ", end="\n")

if __name__ == "__main__":
    main()

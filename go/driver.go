package main

import (
    "fmt"
	"./sorts"
)

func main() {
	// Selection Sort
    selSort := []int {4, 10, 2, 708, 66, 44, 1, 23, 7, 2}
    sorts.PrintArray("Before Selection Sort", selSort)
	sorts.SelectionSort(selSort)
	sorts.PrintArray("After Selection Sort", selSort)

    fmt.Println();

    // Bubble Sort
    bubbleSort := []int {4, 10, 2, 7, 99, 100, 1, 42, 34, 23}
    sorts.PrintArray("Before Bubble Sort", bubbleSort)
	sorts.BubbleSort(bubbleSort)
	sorts.PrintArray("After Bubble Sort", bubbleSort)

}

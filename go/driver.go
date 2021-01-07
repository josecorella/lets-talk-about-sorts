package main

import (
	"./sorts"
)

func main() {
	selSort := []int {4, 10, 2, 708, 66, 44, 1, 23, 7, 2}
    sorts.PrintArray("Before Selection Sort", selSort)
	sorts.SelectionSort(selSort)
	sorts.PrintArray("After Selection Sort", selSort)
}

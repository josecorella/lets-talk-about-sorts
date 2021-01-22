package main

import (
    "math/rand"
    "fmt"
    "time"
	"./sorts"
)

func FillArray(list []int) {
    for i := 0; i < len(list); i++ {
        list[i] = rand.Intn(1000)
    }
}

func main() {
	// Selection Sort
    /// provide seed for generator
    rand.Seed(time.Now().Unix())
    sortArr := make([]int,25)
    FillArray(sortArr)

    sorts.PrintArray("Before Selection Sort", sortArr)
	sorts.SelectionSort(sortArr)
	sorts.PrintArray("After Selection Sort", sortArr)

    fmt.Println();
    FillArray(sortArr)

    // Bubble Sort
    sorts.PrintArray("Before Bubble Sort", sortArr)
	sorts.BubbleSort(sortArr)
   	sorts.PrintArray("After Bubble Sort", sortArr)
    
    fmt.Println();
    FillArray(sortArr);

    // Insertion Sort
    sorts.PrintArray("Before Insertion Sort", sortArr)
	sorts.InsertionSort(sortArr)
	sorts.PrintArray("After Insertion Sort", sortArr)
}

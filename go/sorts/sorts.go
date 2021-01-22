package sorts

import "fmt"

func SelectionSort(list []int) {
    var MinIndex int
    for i := 0; i < len(list); i++ {
        MinIndex = i
        for j := i + 1; j < len(list); j++ {
            if list[MinIndex] > list[j] {
                MinIndex = j
            }
        }
        list[MinIndex], list[i] = list[i], list[MinIndex]
    }
}

func BubbleSort(list []int) {
    for i := 0; i < len(list); i++ {
        for j := 0; j < len(list) - i - 1; j++ {
            if list[j] > list[j + 1] {
                list[j], list[j+1] = list[j+1], list[j]
            }
        }
    }
}

func InsertionSort(list []int) {
    var i, j, key int
    for i = 1; i < len(list); i++ {
        key = list[i]
        j = i - 1

        for j >= 0 && list[j] > key {
            list[j+1] = list[j]
            j--
        }
        list[j+1] = key
    }
}


func PrintArray(sortName string, list []int)  {
    fmt.Printf("%s: ", sortName)
    for v := range list {
        fmt.Printf("%d ", list[v])
    }
    fmt.Println()
}

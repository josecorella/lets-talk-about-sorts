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


func PrintArray(sortName string, list []int)  {
    fmt.Printf("%s: ", sortName)
    for v := range list {
        fmt.Printf("%d ", list[v])
    }
    fmt.Println()
}

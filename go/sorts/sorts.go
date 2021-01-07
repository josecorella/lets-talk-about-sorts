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


func PrintArray(sortName string, list []int)  {
    fmt.Printf("%s: ", sortName)
    for v := range list {
        fmt.Printf("%d ", list[v])
    }
    fmt.Println()
}

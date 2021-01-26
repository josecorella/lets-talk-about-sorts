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

func MergeSort(list []int, l int, r int) {
    if len(list) > 1 {
        var mid, i, j, k int
        mid = len(list) / 2
        left := make([]int, mid - l)
        right := make([]int, r - mid)
        copy(left[:], list[:mid])
        copy(right[:], list[mid:])

        MergeSort(left, l, mid)
        MergeSort(right, mid, r)

        i = 0
        j = 0
        k = l
        for i < len(left) && j < len(right) {
            if left[i] < right[j] {
                list[k] = left[i]
                i++
            } else {
                list[k] = right[j]
                j++
            }
            k++
        }

        for i < len(left) {
            list[k] = left[i]
            i++
            k++
        }

        for j < len(right) {
            list[k] = right[j]
            j++
            k++
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

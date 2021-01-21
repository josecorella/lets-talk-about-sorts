def selection_sort(list):
    for i in range(len(list)):
        min_index = i
        for j in range(i+1, len(list)):
            if list[min_index] > list[j]:
                min_index = j
        list[i], list[min_index] = list[min_index], list[i]


def bubble_sort(list):
    for i in range(len(list)):
        for j in range(0, len(list)-i-1):
            if list[j] > list [j+1]:
                list[j], list[j+1] = list[j+1], list[j]


def print_array(sort, list):
    print(sort)
    for elem in range(len(list)):
        print(list[elem], end=" ")
    print()
def selection_sort(list):
    for i in range(len(list)):
        min_index = i
        for j in range(i+1, len(list)):
            if list[min_index] > list[j]:
                min_index = j
        list[i], list[min_index] = list[min_index], list[i]


def print_array(sort, list):
    print(sort)
    for elem in range(len(list)):
        print(list[elem], end=" ")
    print()

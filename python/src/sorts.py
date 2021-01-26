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

def insertion_sort(list):
    for i in range(1, len(list)):
        key = list[i]
        j = i - 1
        
        while (j >= 0 and list[j] > key):
            list[j+1] = list[j]
            j -= 1
        list[j+1] = key

def merge_sort(list):
    if len(list) > 1:
        mid = len(list)//2

        left = list[:mid]
        right = list[mid:]

        merge_sort(left)
        merge_sort(right)

        i = 0
        j = 0
        k = 0

        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                list[k] = left[i]
                i += 1
            else:
                list[k] = right[j]
                j += 1
            k += 1
        
        while i < len(left):
            list[k] = left[i]
            i += 1
            k += 1
        while j < len(right):
            list[k] = right[j]
            j += 1
            k += 1


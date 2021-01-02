/* sort.h */

#ifndef _SORT_H
#define _SORT_H

/* sort.c */

#include <ctype.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <pthread.h>

void selection_sort(int *arr, int len);

void bubble_sort(int *arr, int len);

void insertion_sort(int *arr, int len);

void merge_sort(int *arr, int len);

void quick_sort(int *arr, int high, int low);

void heap_sort(int *arr, int len);

void print_array(char *str, int *arr, int len);

#endif /* _SORT_H */

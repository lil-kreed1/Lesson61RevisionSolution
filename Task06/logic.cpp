// Task 06 [The sorting from the specified range]
// Сортировка из указанного промежутка
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая сортирует часть элементов заданного вектора
// в указанном диапазоне порядковых номеров либо по возрастанию, 
// либо по убыванию.

#include "util.h"

void sort_in_range(int* array, int size, int start, int end, bool type) {
    if (start > end) {
        int t = start;
        start = end;
        end = t;
    }

    if (start < 0) {
        start = 0;
    }

    if (start >= end) {
        return;
    }

    for (int i = start; i <= end; i++) {
        int key = *(array + i);
        int j = i - 1;

        if (type) {  
            while (j >= start && *(array + j) > key) {
                *(array + j + 1) = *(array + j);
                j--;
            }
        }
        else { 
            while (j >= start && *(array + j) < key) {
                *(array + j + 1) = *(array + j);
                j--;
            }
        }
        *(array + j + 1) = key;
    }
}
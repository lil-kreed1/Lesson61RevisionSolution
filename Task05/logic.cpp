// Task 05 [The sum of elements between first extreme elements]
// Сумма элементов между первыми экстримальными элементами  
// 
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет сумму элементов вектора, расположенных
// между первыми максимальным по модулю и минимальным по модулю элементами.

#include "util.h"

int sum_between_first_min_max(int* array, int size) {
    if (size < 2) return 0;  

    int max = 0;
    int min = 0;
    int max_v = abs(array[0]);
    int min_v = abs(array[0]);

    for (int i = 1; i < size; i++) {
        int current = abs(*(array + i));
        if (current > max_v) {
            max_v = current;
            max = i;
        }
        if (current < min_v) {
            min_v = current;
            min = i;
        }
    }

    int left = (max < min) ? max : min;
    int right = (max > min) ? max : min;

    int sum = 0;
    for (int i = left + 1; i < right; i++) {
        sum += *(array + i);
    }

    return sum;
}
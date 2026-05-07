// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.

#include "util.h"

int find_min(int* array, int size) {
	int min = 9;
	for (int i = 0; i < size; i++) {
		if (*(array + i) < min) {
			min = *(array + i);
		}
	}
	return min;
}
int find_max(int* array, int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (*(array + i) > max) {
			max = *(array + i);
		}
	}
	return max;
}
double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	double min = find_min(array, size);
	double max = find_max(array, size);
	double sum = 0;
	int length = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == min || *(array + i) == max) {

		}
		else {
			sum += *(array + i);
			length++;
		}
	}
	if (sum == 0) {
		return 0;
	}

	return sum / length;
}
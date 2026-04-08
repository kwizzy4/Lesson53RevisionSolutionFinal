// Task 10 [The number of positive elements]
// Количество положительных элементов
//
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество положительных элементов вектора.

#include "logic.h"

int count_of_positive_elements(int vector[], int size) {
	if (size == 0) {
		return 0;
	}
	int remainingCount = count_of_positive_elements(vector, size - 1);

	if (vector[size - 1] > 0) {
		return 1 + remainingCount;
	}
	return remainingCount;
}
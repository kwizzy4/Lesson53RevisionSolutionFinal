// Task 11 [The arithmetic mean]
// Среднее арифметическое
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет среднее арифметическое элементов вектора.
#include "logic.h"

double sum_elements(int vector[], int size) {
	if (size == 0) {
		return 0;
	}
	return vector[size - 1] + sum_elements(vector, size - 1);
}
double calculate_average(int vector[], int size) {
	if (size == 0) {
		return 0.0;
	}
	int sum = sum_elements(vector, size);
	return(double)sum / size;
}
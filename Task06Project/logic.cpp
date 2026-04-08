// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.

#include "logic.h"

int sum(int number) {
	if (number <= 0) {
		return 0;
	}
	if (number % 2 == 0) {
		return number + sum(number - 1);
	}
	else {
		return sum(number - 1);
	}
}
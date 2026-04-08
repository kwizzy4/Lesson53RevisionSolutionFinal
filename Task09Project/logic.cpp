// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5

#include "logic.h"

int sum(int number) {
	if (number == 0) {
		return 0;
	}

	int lastDigit = number % 10;

	int remainingSum = sum(number / 10);

	if (lastDigit % 5 == 0) {
		return lastDigit + remainingSum;
	}
	return remainingSum;
}
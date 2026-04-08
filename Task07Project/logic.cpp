// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр в заданном целом числе.
#include "logic.h"

int count_of_odd_digits(int number) {
	if (number < 0) {
		return -number;
	}
	if (number < 10) {
		return (number % 2 == 1) ? 1 : 0;
	}
	int last_digit = number % 10;
	int is_odd = (last_digit % 2 == 1) ? 1 : 0;

	return is_odd + count_of_odd_digits(number / 10);
}
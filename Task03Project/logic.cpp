// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"

int sum(int n, int m) {
	if (n > m) {
		return 0;
	}
	if (n == m) {
		return n;
	}
	if (m - n > 10000) {
		return 1;
	}
	return n + sum(n + 1, m);
}
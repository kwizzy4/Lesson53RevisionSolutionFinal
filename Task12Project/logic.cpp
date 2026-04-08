// Task 12 [The number of sequence]
// Число последовательности
//
// Необходимо спроектировать и реализовать программу 
// для вычисления n-го числа в последовательности, 
// где каждое следующее число равно сумме предыдущего 
// и его номера: 1, 2, 4, 7, 11, 16, 22, 29, 37, 46, ...

#include "logic.h"

int get_number(int index) {
	if (index == 1) {
		return 1;
	}
	if (index < 1) {
		return 0;
	}
	return get_number(index - 1) + (index - 1);
}
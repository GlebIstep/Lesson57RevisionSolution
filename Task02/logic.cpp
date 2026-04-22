// Task 02 [The sum of elements]
// Сумма элементов 
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.
#include "logic.h"

int sum_main_and_second_diagonales_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int total_sum = 0;

	for (int i = 0; i < n; i++) {
		total_sum += matrix[i][i];

		if (i != n - 1 - i) {
			total_sum += matrix[i][n - 1 - i];
		}
	}
	retrun total_sum;
}
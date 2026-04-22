// Task 04 [The Sum of elements of columns with extreme elements]
// Сумма элементов столбцов с экстремальными элементами
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.
#include "logic.h"

int sum_elements_of_columns_with_extreme_value(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int min = matrix[0][0];
	int max = matrix[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}
	int total_sum = 0;

	for (int j = 0; j < m; j++) {
		bool has_extreme = false;
		int column_sum = 0;

		for (int i = 0; i < n; i++) {
			column_sum += matrix[i][j];

			if (matrix[i][j] == min || matrix[i][j] == max) {
				has_extreme = true;
			}
		}
		if (has_extreme) {
			total_sum += column_sum;
		}
	}
	return total_sum;

	

}
// Task 05 [The local maxima].
// Локальнык максимумы
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// находит локальные максимумы.
#include "logic.h"

string get_all_local_maximums(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	string result = "";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			bool max = true;

			if (i > 0 && matrix[i][j] <= matrix[i - 1][j]) {
				max = false;
			}

			if (i < n - 1 && matrix[i][j] <= matrix[i + 1][j]) {
				max = false;
			}

			if (j > 0 && matrix[i][j] <= matrix[i][j - 1]) {
				max = false;
			}

			if (j < m - 1 && matrix[i][j] <= matrix[i][j + 1]) {
				max = false;
			}

			if (max) {
				result += to_string(matrix[i][j]) + " ";
			}
		}
	}
	return result;
}
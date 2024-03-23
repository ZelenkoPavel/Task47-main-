#include <iostream>

using namespace std;

int extreme_sum_of_matrix_column_elements
		(int** matrix, int vertical, int horizontal) {
	if (vertical <= 0 || horizontal <= 0) {
		return -1;
	}
	int index_max_sum_values_of_column = -1;
	int max_sum_values_of_column = -2147483648;

	for (int i = 0; i < horizontal; i++)
	{
		int sum_values_of_column = 0;
		for (int j = 0; j < vertical; j++)
		{
			sum_values_of_column += matrix[j][i];
		}

		if (max_sum_values_of_column < sum_values_of_column) {
			index_max_sum_values_of_column = i;
			max_sum_values_of_column = sum_values_of_column;
		}
	}

	return index_max_sum_values_of_column + 1;
}
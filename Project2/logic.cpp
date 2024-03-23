#include <iostream>
#include <string>

using namespace std;

string neighbor_matrix_elements
(int** matrix, int vertical, int horizontal) {
	if (vertical <= 0 || horizontal <= 0) {
		return "Incorrect data was entered\n";
	}
	string msg = "Value  above  left  below  right\n";

	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			msg += "  ";
			msg += matrix[i][j] > 9 || matrix[i][j] < 0
				? to_string(matrix[i][j]) + "    " : to_string(matrix[i][j]) + "     ";
			if (i > 0) {
				msg += matrix[i - 1][j] > 9 || matrix[i - 1][j] < 0
					? to_string(matrix[i - 1][j]) + "    " : to_string(matrix[i - 1][j]) + "     ";
			}
			else {
				msg += "  -    ";
			}
			if (j > 0) {
				msg += matrix[i][j - 1] > 9 || matrix[i][j - 1] < 0
					? to_string(matrix[i][j - 1]) + "    " : to_string(matrix[i][j - 1]) + "     ";
			}
			else {
				msg += "  -    ";
			}
			if (i < vertical - 1) {
				msg += matrix[i + 1][j] > 9 || matrix[i + 1][j] < 0
					? to_string(matrix[i + 1][j]) + "    " : to_string(matrix[i + 1][j]) + "     ";
			}
			else {
				msg += "  -    ";
			}
			if (j < horizontal - 1) {
				msg += matrix[i][j + 1] > 9 || matrix[i][j + 1] < 0
					? to_string(matrix[i][j + 1]) + "    " : to_string(matrix[i][j + 1]) + "     ";
			}
			else {
				msg += "  -    ";
			}
			msg += "\n";
		}
	}

	return msg;
}
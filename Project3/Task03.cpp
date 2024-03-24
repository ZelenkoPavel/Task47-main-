#include <iostream>

using namespace std;

void the_matrix_chessboard(string**);

int main() {

	string** matrix = new string* [8];
	for (int i = 0; i < 8; i++) {
		*(matrix + i) = new string[8];
	}

	the_matrix_chessboard(matrix);

	for (int j = 0; j < 8; j++)
	{
		for (int k = 0; k < 8; k++)
		{
			cout << *(*(matrix + j) + k);
		}
		cout << endl;
	}

	return 0;
}
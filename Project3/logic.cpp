#include <iostream>

using namespace std;

void the_matrix_chessboard(string** matrix) {
	bool flag = false;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			*(*(matrix + i) + j) = flag ? "XX" : "  ";
			flag = !flag;
		}
		flag = !flag;
	}
}
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void random_init(int** matrix, int vertical, int horizontal, int min, int max) {
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	srand(time(NULL));

	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

void  user_init(int** matrix, int vertical, int horizontal){
	cout << "Input numbers: \n";
	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			cin >> matrix[i][j];
		}
	}
}

string convert_to_string(int** matrix, int vertical, int horizontal) {
	if (vertical <= 0 || horizontal <= 0) {
		return "Incorrect data was entered\n";
	}
	string msg = "";

	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			if (matrix[i][j] < 0) {
				msg += to_string(matrix[i][j]) + " ";
			}
			else if (matrix[i][j] >= 0 && matrix[i][j] < 10) {
				msg += " " + to_string(matrix[i][j]) + " ";
			}
			else {
				msg += to_string(matrix[i][j]) + " ";
			}
		}
		msg += "\n";
	}

	return msg;
}
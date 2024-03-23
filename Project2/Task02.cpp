#include <iostream>

using namespace std;

void random_init(int**, int, int, int, int);
void user_init(int**, int, int);
string convert_to_string(int**, int, int);

string neighbor_matrix_elements
(int** matrix, int vertical, int horizontal);

int main() {

	int min, max;
	int vertical, horizontal;
	int choice;

	do {
		system("cls");
		cout << "Input size vertical and horizontal of matrix: ";
		cin >> vertical >> horizontal;
		cout << "Select initialization (1 or 2): \n1) user_init \n2) random_init \n";
		cin >> choice;
	} while (vertical <= 0 || horizontal <= 0 || choice < 1 || choice > 2);

	int** matrix = new int* [vertical];
	for (int i = 0; i < vertical; i++)
	{
		*(matrix + i) = new int[horizontal];
	}

	if (choice == 1) {
		user_init(matrix, vertical, horizontal);
	}
	else {
		cout << "Input range of values (min, max): ";
		cin >> min >> max;
		random_init(matrix, vertical, horizontal, min, max);
	}

	cout << "Matrix elements:\n" << convert_to_string(matrix, vertical, horizontal) << endl;


	cout << "The value of each element and its neighboring elements:\n";
	cout << neighbor_matrix_elements(matrix, vertical, horizontal) << endl;

	for (int j = 0; j < vertical; j++)
	{
		delete[] * (matrix + j);
	}
	delete matrix;

	return 0;
}
#include <iostream>
#include <time.h>
using namespace std;
const int ROWS = 3, COLUMNS = 3;
double Total(const double[][COLUMNS]);
double Average(const double[][COLUMNS]);
double RowTotal(const double[][COLUMNS], const int);
double ColumnTotal(const double[][COLUMNS], const int);
double HighestInRow(const double[][COLUMNS], const int);
double LowestInRow(const double[][COLUMNS], const int);
void Transpose(const double[][COLUMNS], const int);
void LeftDiagonal(const double[][COLUMNS], const int);
void RightDiagonal(const double[][COLUMNS], const int);
void multiply(int array[3][3]);
void displayData(const double[][COLUMNS], const int, const int);

int main() {

	int choice;
	char repeat;

	const int row = 3, column = 3;
	double array[row][column];
	double input;

	cout << "2D Array Input:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << "\ns[" << i << "][" << j << "]=  ";
			cin >> array[i][j];
		}
	}

	cout << "\nThe 2-D Array is:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << " " << array[i][j];
		}
		cout << endl;
	}

	cout << "---------MENU--------" << endl;
	cout << "1. TOTAL. " << endl;
	cout << "2. AVERAGE. " << endl;
	cout << "3, ROW-TOTAL " << endl;
	cout << "4. COLUMN-TOTAL. " << endl;
	cout << "5. HIGHEST-IN-ROW. " << endl;
	cout << "6. LOWEST-IN-ROW. " << endl;
	cout << "7. TRANSPOSE. " << endl;
	cout << "8. LEFT-DIAGONAL-TOTAL. " << endl;
	cout << "9. RIGHT-DIAGONAL-TOTAL. " << endl;
	cout << "10. MULTIPLY. \n---------------------" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	while (1) {

		switch (choice) {

		case 1:
			cout << "Total = " << Total(array) << endl;
			break;
		case 2:
			cout << "Average = " << Average(array) << endl;
			break;
		case 3:
			cout << "The row total =" << RowTotal(array, row) << endl;
			break;
		case 4:
			cout << "The column total =" << ColumnTotal(array, column) << endl;
			break;
		case 5:
			cout << "Highest in this row =" << HighestInRow(array, row) << endl;
			break;
		case 6:
			cout << "Lowest in this row = " << LowestInRow(array, row) << endl;
			break;
		case 7:
			Transpose(array, row);
			break;
		case 8:
			LeftDiagonal(array, row);
			break;
		case 9:
			RightDiagonal(array, row);
			break;
		case 10:
			
			break;

		default:
			cout << "Please enter a valid option!" << endl;

		}

		system("pause > 0");
		system("cls");

		cout << "---------MENU--------" << endl;
		cout << "1. TOTAL. " << endl;
		cout << "2. AVERAGE. " << endl;
		cout << "3, ROW-TOTAL " << endl;
		cout << "4. COLUMN-TOTAL. " << endl;
		cout << "5. HIGHEST-IN-ROW. " << endl;
		cout << "6. LOWEST-IN-ROW. " << endl;
		cout << "7. TRANSPOSE. " << endl;
		cout << "8. LEFT-DIAGONAL-TOTAL. " << endl;
		cout << "9. RIGHT-DIAGONAL-TOTAL. " << endl;
		cout << "10. MULTIPLY. \n---------------------" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
	}
	return 0;
}

void displayData(const double array[][3], const int row, const int column)
{
	cout << "Total = " << Total(array) << endl;
	cout << "Average = " << Average(array) << endl;
	cout << "The row total =" << RowTotal(array, row) << endl;
	cout << "The column total =" << ColumnTotal(array, column) << endl;
	cout << "Highest in this row =" << HighestInRow(array, row) << endl;
	cout << "Lowest in this row = " << LowestInRow(array, row) << endl;
	//cout<<"Transpose ="<<Transpose(array, row)<<endl;
}

double Total(const double array[][COLUMNS]) {
	double total = 0;
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
			total += array[row][column];

	}

	return total;
}

double Average(const double array[][COLUMNS]) {
	double total_array_elements = 0,
		sum= 0;

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			total_array_elements++;
			sum += array[row][column];
		}

	}
	return sum / total_array_elements;
}

double RowTotal(const double array[][COLUMNS], const int ROW) {
	int row_number;
	double row_total = 0;
	cout << "Which row's total do you want to calculate?" << endl;
	cin >> row_number;

	int i, j, sum = 0;
	if (row_number == 1) {
		sum = array[0][0] + array[0][1] + array[0][2];
		cout << "Total of the row " << row_number << " = " << sum << endl;
	}
	if (row_number == 2) {
		sum = array[1][0] + array[1][1] + array[1][2];
		cout << "Total of the row " << row_number << " = " << sum << endl;
	}

	if (row_number == 3) {
		sum = array[2][0] + array[2][1] + array[2][2];
		cout << "Total of the row " << row_number << " = " << sum << endl;
	}

	return row_total;
}

double ColumnTotal(const double array[][COLUMNS], const int COLUMN) {
	int column_number;
	double column_total = 0;
	cout << "Which column's total do you want to calculate?" << endl;
	cin >> column_number;

	int i, j, sum = 0;
	if (column_number == 1) {
		sum = array[0][0] + array[1][0] + array[2][0];
		cout << "Total of the column " << column_number << " = " << sum << endl;
	}
	if (column_number == 2) {
		sum = array[0][1] + array[1][1] + array[2][1];
		cout << "Total of the column " << column_number << " = " << sum << endl;
	}

	if (column_number == 3) {
		sum = array[0][2] + array[1][2] + array[2][2];
		cout << "Total of the column " << column_number << " = " << sum << endl;
	}

	return column_total;
}

double HighestInRow(const double array[][COLUMNS], const int ROW) {

	int row_number;
	cout << "Which row's highest do you want to find? " << endl;
	cin >> row_number;

	double highest = array[(row_number - 1)][0];

	for (int column = 1; column < COLUMNS; column++) {
		if (array[(row_number - 1)][column] >= highest)
			highest = array[(row_number - 1)][column];
	}

	return highest;
}

double LowestInRow(const double array[][COLUMNS], const int ROW) {
	int row_number;
	cout << "Which row's lowest do you want to find? " << endl;
	cin >> row_number;
	double lowest = array[(row_number - 1)][0];
	for (int column = 1; column < COLUMNS; column++) {
		if (array[(row_number - 1)][column] <= lowest)
			lowest = array[(row_number - 1)][column];
	}

	return lowest;
}

void Transpose(const double array[][COLUMNS], const int ROW) {

	// Printing the transpose
	cout << "\nTranspose of Matrix : " << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << " " << array[j][i];
		}
		cout << endl;
	}
}
void LeftDiagonal(const double array[][COLUMNS], const int ROW) {
	int sum = 0;
	cout << "Sum of left diagonal is :";
	sum += array[0][0] + array[1][1] + array[2][2];
	cout << sum;
}	
void RightDiagonal(const double array[][COLUMNS], const int ROW) {
	int sum = 0;
	cout << "Sum of right diagonal is :";
	sum += array[2][0] + array[1][1] + array[0][2];
	cout << sum;
}
 

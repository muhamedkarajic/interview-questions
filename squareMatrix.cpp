#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int rows = 21;
int columns = 21;

struct Square
{
	int X;
	int Y;
	int size;
};

void Errase(char **matrix)
{
	for (size_t i = 0; i < rows; i++)
		for (size_t j = 0; j < columns; j++)
			matrix[i][j] = ' ';
}

void Deallocate(char ** &matrix)
{
	for (size_t i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
	matrix = nullptr;
}

void Allocate(char ** &matrix)
{
	if (matrix != nullptr)
		Deallocate(matrix);
	
	matrix = new char*[rows];
	for (size_t i = 0; i < rows; i++)
		matrix[i] = new char[columns];
	Errase(matrix);
}

void Print(char **matrix, Square square)
{
	Errase(matrix);
	for (size_t i = square.X; i < square.X+square.size; i++)
		for (size_t j = square.Y; j < square.Y+square.size; j++)
			matrix[i][j] = '*';

	for (size_t i = 0; i < columns; i++)
		cout << "+-";
	cout << "+-" << endl;

	for (size_t i = 0; i < rows; i++)
	{
		cout << "|";
		for (size_t j = 0; j < columns; j++)
		{
			cout << setw(2) << matrix[i][j];
		}
		cout << "|" << endl;
	}

	for (size_t i = 0; i < columns; i++)
		cout << "+-";
	cout << "+-" << endl;
}

int main()
{
	char **matrix = nullptr;
	Square square;

	square.X = rows/ 2;
	square.Y = columns / 2;
	square.size = 3;

	Allocate(matrix);

	char input;

	do
	{
		Print(matrix, square);
		input = _getch();
		input = toupper(input);
        
		if (input == 'W' && square.X > 0)
			square.X--;
		else if (input == 'A' && square.Y > 0)
			square.Y--;
		else if (input == 'S' && square.X+square.size < columns)
			square.X++;
		else if (input == 'D' && square.Y+square.size<rows)
			square.Y++;
		else if (input == 'L' && square.size < 9)
		{
			square.size++;
			Deallocate(matrix);
			rows++;
			columns++;
			Allocate(matrix);
		}
		else if (input == 'K' &&  square.size > 1)
		{
			square.size--;
			Deallocate(matrix);
			rows--;
			columns--;
			Allocate(matrix);
		}
		system("CLS");
	} while (input!='M');
	Deallocate(matrix);
	return 0;
}
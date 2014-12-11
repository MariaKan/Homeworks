#include<iostream>
#include <stdio.h>
#define Row 3
#define Col 6
using namespace std;

void spiral_print(int end_row, int end_col, int a[Row][Col])
{
	int start_row = 0, start_col = 0;

	while (start_row < end_row && start_col < end_col)
	{
		// Print the first row from the remaining rows 
		for (int i = start_col; i < end_col; i++)
		{
			cout << a[start_row][i] << " ";
		}
		start_row++;

		// Print the last column from the remaining columns 
		for (int i = start_row; i < end_row; i++)
		{
			cout << a[i][end_col - 1] << " ";
		}
		end_col--;

		// Print the last row from the remaining rows 
		if (start_row < end_row)
		{
			for (int i = end_col - 1; i >= start_col; i--)
			{
				cout << a[end_row - 1][i] << " ";
			}
			end_row--;
		}

		// Print the first column from the remaining columns 
		if (start_col < end_col)
		{
			for (int i = end_row - 1; i >= start_row; i--)
			{
				cout << a[i][start_col] << " ";
			}
			start_col++;
		}
	}
}


int main()
{

	int a[Row][Col] = { { 1, 2, 3, 4, 5, 6 }, 
	                { 7, 8, 9, 10, 11, 12 }, 
					{ 13, 14, 15, 16, 17, 18 } };

	spiral_print(Row, Col, a);

	system("pause");
	return 0;
}
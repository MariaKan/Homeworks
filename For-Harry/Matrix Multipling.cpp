#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[100][100], b[100][100], c[100][100];
	int row_a = 0, col_a = 0, row_b = 0, col_b = 0, i, j;

	cout << "Enter the number of rows and columns for Matrix A:\n\n";
	cin >> row_a >> col_a;
    system("cls");

	cout << "Enter elements for Matrix A:\n";
	for (i = 0; i<row_a; i++)
	{
		for (j = 0; j<col_a; j++)
		{
			cin >> a[i][j];
		}
	}
	system("cls");

	cout << "Enter the number of rows and columns for Matrix B:\n";
	cin >> row_b >> col_b;
	system("cls");

	cout << "Enter elements for Matrix B:\n";
	for (i = 0; i < row_b; i++)
	{
		for (j = 0; j < col_b; j++)
		{
			cin >> b[i][j];
		}
	}
	system("cls");

	if (col_a == row_b)
	{

		for (i = 0; i<row_a; i++)
		{
			for (j = 0; j<col_b; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k<row_b; k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}
        
		cout << "The New Matrix:\n";
		for (i = 0; i<row_a; i++)
		{
			for (j = 0; j<col_b; j++)
			{
				cout << c[i][j]<< " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Multiplication is not possible\n";
	}

	_getch();
	return 0;
}
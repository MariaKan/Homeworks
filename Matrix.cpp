#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cout << "Enter a number for the matrix's rows and columns.\n";
	cin >> num;

	// Let's asume that all users are idiots
	if (num < 0)
	{
		while (num < 0)
		{
			cout << "Are you kidding me?! How am I supposed to build a matrix with a negative number of columns and rows?! Please, try again.\n";
			cin >> num;
		}
	}

	// The Matrix (works for 0<num<10, otherwise the matrix is not aligned. I don't have nerves to do it :D .. )


	for (int i = 1; i < num * num + 1; i++)
	{
		if (i <= 9)
		{
			cout << "0" << i << " ";
		}
		else
		{
			cout << i << " ";
		}
		if (i % num == 0)
		{
			cout << endl;
		}
	}

	system("pause");
	return 0;
}
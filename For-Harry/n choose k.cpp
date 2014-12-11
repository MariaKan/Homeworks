#include <iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n > 0)
	{
		return n*fact(n - 1);
	}
}

int choose(int n, int k)
{
	if (n == k)
	{
		return 1;
	}
	else
	{
		return (n*fact(n - 1)) / (fact(k)*fact(n - k));
	}
}

int main()
{
	int n;  
	cout << "Enter N: ";
	cin >> n;
	system("cls");

	int k;
	cout << "Enter K: ";
	cin >> k;
	system("cls");

	int result = choose(n, k);
	cout << "The available combinations are: " << result;

	_getch();
	return 0;
}
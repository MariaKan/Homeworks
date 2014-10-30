#include<iostream>
using namespace std;
int main()
{
	long long int factorial = 1, num = 0, nulls = 0, factorial_dig = 0, factorial_holder=0;
	cout << "Enter a number betwin 0 and 20.\n";
	cin >> num;
	
	// Asuming users are idiots
	if (num < 0 || num > 20)
	{
		while(num < 0 || num > 20)
		{
			cout << "You cannot be serious.. Did I mention it somewhere? Try again:\n";
			cin >> num;
		}
	}

	// Factorial
	for (int i = 1; i <= num; i++)
	{
		factorial *= i;
		factorial_holder = factorial;
	}
	
	
    //Number of the factoral 
	while (factorial != 0)
	{
		factorial_dig++;
		factorial /= 10;
	}

	//Nulls
	for (int i = 0; i <= factorial_dig; i++)
	{
		if (factorial_holder % 10 == 0)
		{
			nulls++;
			factorial_holder /= 10;
		}
		else
		{
			break;
		}
	}
	cout <<"The nulls are: " << nulls << endl; 
	system("pause");
	return 0;
}
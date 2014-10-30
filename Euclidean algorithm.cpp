#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0, dividend = 0, divisor = 0, GCD = 0, residue=0;
	cout << "Enter 2 numbers.\n";
	cin >> num1 >> num2;
	
	//Checking for equality
	if (num1 == num2)
	{
		while (num1 == num2)
		{
			cout << "You did not just do that! Please enter different numbers.. Duhh.\n";
			cin >> num1 >> num2;
		}
	}


	//Preparation for Euclidean algorithm
	if (num1 > num2)
	{
		dividend = num1;
		divisor = num2;
	}
	else
	{
		dividend = num2;
		divisor = num1;
	}
	
	//The actual algorithm
	do
	{
		residue = dividend % divisor;
		dividend = divisor;
		divisor = residue;
		GCD = dividend;
	} 
	while (residue != 0);

	cout <<"The GCD("<<num1<<","<<num2<<") is: "<< GCD << endl;
	system("pause");
	return 0;
}
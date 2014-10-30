#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "Please enter two numbers and a symbol for operation betwin them (+, -, *, /, %, '^' for power, '$' and second number 0 for square root):\n";
	int number1 = 0, number2 = 0; 
	char operation;
	cin >> number1;
	cin >> operation;
	cin >> number2;
	

	switch (operation)
	{
	case '+': cout << number1 + number2 << endl; break;
	case '-': cout << number1 - number2 << endl; break;
	case '*': cout << number1 * number2 << endl; break;
	case '/': cout << number1 / number2 << endl; break;
	case '%': cout << number1 % number2 << endl; break;
	case '^': cout << pow(number1, number2) << endl; break;
	case '$': cout << sqrt(number1) << endl; break;
	    }
	system("pause");
	return 0;
}
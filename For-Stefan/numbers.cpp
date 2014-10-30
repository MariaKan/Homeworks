#include<iostream>
using namespace std;
int main()
{
	int num = 0, hundreds = 0, tens = 0, ones = 0, exception=0, exception_tens=0;
	cin >> num;
	hundreds = num / 100;
	tens = num / 10 % 10;
	ones = num % 10;
	exception = num % 100; // 11, 12, 13, ... , 19
	exception_tens = exception % 10; //expected to be 1

	switch (hundreds)
	{
	case 0: break;
	case 1: cout << "One hundred "; break;
	case 2: cout << "Two hundred "; break;
	case 3: cout << "Three hundred "; break;
	case 4: cout << "Four hundred "; break;
	case 5: cout << "Five hundred "; break;
	case 6: cout << "Six hundred "; break;
	case 7: cout << "Seven hundred "; break;
	case 8: cout << "Eight hundred "; break;
	case 9: cout << "Nine hundred "; break;
	}
	
	switch (exception)
	{
	case 10: cout << "and ten\n"; break;
	case 11: cout << "and eleven\n"; break;
	case 12: cout << "and twelve\n"; break;
	case 13: cout << "and thirteen\n"; break;
	case 14: cout << "and fourteen\n";  break;
	case 15: cout << "and fifteen\n"; break;
	case 16: cout << "and sixteen\n"; break;
	case 17: cout << "and seventeen\n"; break;
	case 18: cout << "and eighteen\n"; break;
	case 19: cout << "and nineteen\n"; break;
	}

	switch (tens)
	{
	case 0: break;
	case 2: cout << "and twenty "; break;
	case 3: cout << "and thirthy "; break;
	case 4: cout << "and forthy "; break;
	case 5: cout << "and fifty "; break;
	case 6:	cout << "and sixty "; break;
	case 7: cout << "and seventy "; break;
	case 8: cout << "and eighty "; break;
	case 9: cout << "and ninety "; break;
	}

	if (exception_tens != 1 && tens > 1) 
	{
		switch (ones)
		{
		case 0: break;
		case 1: cout << "one\n"; break;
		case 2: cout << "two\n"; break;
		case 3: cout << "three\n"; break;
		case 4: cout << "four\n"; break;
		case 5: cout << "five\n"; break;
		case 6: cout << "six\n"; break;
		case 7: cout << "seven\n"; break;
		case 8: cout << "eight\n"; break;
		case 9: cout << "nine\n"; break;
		}
	}

	else if (exception_tens != 1  && tens == 0)
	{
		switch (ones)
		{
		case 0: break;
		case 1: cout << "and one\n"; break;
		case 2: cout << "and two\n"; break;
		case 3: cout << "and three\n"; break;
		case 4: cout << "and four\n"; break;
		case 5: cout << "and five\n"; break;
		case 6: cout << "and six\n"; break;
		case 7: cout << "and seven\n"; break;
		case 8: cout << "and eight\n"; break;
		case 9: cout << "and nine\n"; break;
		}
	}

	system("pause");
	return 0;
}
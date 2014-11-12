#include<iostream>
using namespace std;
int main()
{
	int num = 0, num_holder = 0, sum = 0, check = 0, check2 = 0, threes = 0, digits = 0;
	bool same = true;
	cin >> num;


	if (num < 0)
	{
		while (num < 0)
		{
			cout << "You cannot be serious.. Try again with a higher number:\n";
			cin >> num;
		}
	}
	num_holder = num;


	// Sum
	while (num != 0)
	{ 
		
		sum += num % 10;
		num /= 10;
	}

	cout <<"The sum of the digits is: " << sum << endl;
	
	// 3s
	num = num_holder;

	while(num != 0)
	{
		check = num % 10;
		if (check == 3)
		{
			threes++;
			num /= 10;
		}
		else
		{
			num /= 10;
		}

	}

	cout << "The 3s in the number are: " << threes << endl;

	// digits	
	num = num_holder; 
	while (num != 0)
	{
		digits++;
		num /= 10;
	}

	// same
	num = num_holder;
	 while (num != 0)
	{
		check = num % 10;
		check2 = num / 10 % 10;
		 for (int i = 0; i <= digits; i++)
		 {
			 
			 if (check != check2)
			 {
				 same = false;
				 num /= 10;
			 }
			 else
			 {
				 same = true;
				 num /= 10;
			 }

		 }
	}
	
	 if (same)
	 {
		 cout << "There are same digits.\n";
	 }
	 else
	 {
		 cout << "There aren't same digits.\n";
	 } 

	system("pause");
	return 0;
}
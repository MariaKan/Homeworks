#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
	char sentence[10000];
	cin.getline(sentence, 10000);
	int len = strlen(sentence);

	int d = len; 
	int m = 0;

	//No comma afret last element
	if (sentence[len] == ' ')
	{
		while (sentence[d] == ' ')
		{
			d--;
		}
	}

	//No comma before first element
	if (sentence[m] == ' ')
	{
		while (sentence[m] == ' ')
		{
			m++;
		}
	}

	//The whole shit
	for (int i = m; i < d - 1; i++)
	{
		 if (sentence[i] == ' ' && sentence[i + 1] != ' ')
		{
			int comma = i;
			for (int k = len + 1; k >= comma + 1; k--)
			{
				sentence[k] = sentence[k - 1];
			}
			
			sentence[comma] = ',';
			len++;
			i++;
		}
		 if (sentence[i] == ' ' && sentence[i + 1] == ' ')
		 {
			 int comma = i;
			 for (int k = len + 1; k >= comma + 1; k--)
			 {
				 sentence[k] = sentence[k - 1];
			 }
			 sentence[comma] = ',';

			 for (int z = i+1; sentence[i+1] == ' '; z++)
			 {	 
				 len++;
				 i++;
			 }
		 }

		 

	}

	cout << sentence;


	_getch();
	return 0;
}

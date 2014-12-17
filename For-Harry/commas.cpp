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

	for (int i = 0; i < len; i++)
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

	}

	cout << sentence;


	_getch();
	return 0;
}

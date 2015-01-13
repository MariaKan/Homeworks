#include<iostream>
#include<conio.h>

using namespace std;

void remove_letter (char* array, char letter)
{
	int len = strlen(array);

	for (int i = 0; i < len; i++)
	{
		if (array[i] == letter)
		{
			for (int j = i; j <= len; j++)
			{
				array[j] = array[j + 1];
			}
			len--;
			i--;
		}
	}	
}

int main()
{
	char array[101] = { 0 };
	cin.getline(array, 101);

	char letter;
	cin >> letter;

	remove_letter(array, letter);

	cout << array;

	_getch();
	return 0;
}
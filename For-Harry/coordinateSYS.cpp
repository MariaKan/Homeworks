#include<iostream>
using namespace std;
int main()
{
	cout << "Enter point's coordinates.\n";
	double point_x = 0, point_y = 0;
	cin >> point_x >> point_y;
	if (point_x == 0 && point_y == 0)
	{
		cout << "The point is in the begining of the coordinate system.\n";
	}
	else if (point_x > 0 && point_y > 0)
	{
		cout << "The point is in the first quadrant.\n";
	}
	else if (point_x < 0 && point_y > 0)
	{
		cout << "The point is in the second quadrant.\n";
	}
	else if (point_x < 0 && point_y < 0)
	{
		cout << "The point is in the third quadrant.\n";
	}
	else if (point_x > 0 && point_y < 0)
	{
		cout << "The point is in the fourth quadrant.\n";
	
	}
	system("pause");
	return 0;
}
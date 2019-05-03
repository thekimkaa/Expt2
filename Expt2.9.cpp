#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, row, col;
	
	cout << "How many rows: "; cin >> row;
	cout << "How many columns: "; cin >> col;
	
	for (x=1; x<=row; x++)
	{
		for (y=1; y<=col; y++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	_getch();
	return 0;
}

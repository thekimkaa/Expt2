#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, product;
	
	cout << "Enter a number: "; cin >> y;
	cout << "Multiplication table of " << y << ":" << endl;
	
	for (x=1; x<=10; x++)
	{
		product = x*y;
		cout << x << " * " << y << " = " << product << endl;
	}
	
	_getch();
	return 0;
}

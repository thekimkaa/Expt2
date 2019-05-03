#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float a,b,c;
	
	cout << "Enter first number: "; cin >> a;
	cout << "Enter second number: "; cin >> b;
	cout << "Enter third number: "; cin >> c;
	
	if ((a>=b) && (a>=c))
		cout << "The LARGEST of the three numbers is " << a << ".";
	else if ((b>=a) && (b>=c))
		cout << "The LARGEST of the three numbers is " << b << ".";
	else
		cout << "The LARGEST of the three numbers is " << c << ".";
		
	_getch();
	return 0;
}

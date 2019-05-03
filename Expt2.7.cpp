#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, sum;
	
	cout << "Enter a number: "; cin >> x;
	
	while (x>0)
	{
		sum = 0;
		
		for (y=1; y<=x; y++)
		{
			sum+=y;
		}
		
		cout << "Your sum from 1 to " << x << " is " << sum << "." << endl;
		cout << "Enter a number: "; cin >> x;
	}
	
	cout << "Thank you!";
	
	_getch();
	return 0;
}


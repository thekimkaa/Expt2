#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	
	for (n=1; n<=10; n++)
	{
		cout << n << ",";
	}
	
	for (n=12; n<=28; n+=2)
	{
		cout << n << ",";
	}
	
	for (n=30; n<=30; n+=2)
	{
		cout << n;
	}
	
	_getch();
	return 0;
}


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, t, t1, t2, t3, next;
	
	t1 = 0;
	t2 = 1;
	t3 = 10946;
	n = 20;
	
	cout << "Fibonacci numbers: \n";
	
	for (t=1; t<=n; ++t)
	{

		if (t==1)
		{
			cout << "" << t1 << ",";
			continue;
		}
		
		if (t==2)
		{
			cout << t2 << ",";
		}
		
		next = t1+t2;
		t1 = t2;
		t2 = next;
		
		cout << next << ",";
		
		if (t==20)
		{
			cout << t3 << "";
		}
		
	}
	
	_getch();
	return 0;
}

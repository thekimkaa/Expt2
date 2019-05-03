#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char choice;
	double packageA, packageAa, packageB, packageBb, packageC, totalamtdueA, totalamtdueAa, totalamtdueB, totalamtdueBb, totalamtdueC;
	
	cout << "Which package did you avail? Package [A], Package [B], Package [C] ";
	cin >> choice;
	
	switch (choice)
	{
		case 'A':
		case 'a':
			cout << "How many hours were used? "; cin >> packageA;
			
			packageAa = packageA-10;
			totalamtdueA = 995+packageAa*20;
			totalamtdueAa = 995;
			
			if (packageA > 10)
			cout << "Total amount due is P" << totalamtdueA << endl;
			else if (packageA <= 10)
			cout << "Total amout due is P" << totalamtdueAa << endl;
			break;
			
		case 'B':
		case 'b':
			cout << "How many hours were used? "; cin >> packageB;
			
			packageBb = packageB-20;
			totalamtdueB = 1495+packageBb*10;
			totalamtdueBb = 1495;
			
			if (packageB > 20)
			cout << "Total amount due is P" << totalamtdueB << endl;
			else if (packageB <= 20)
			cout << "Total amount due is P" << totalamtdueBb << endl;
			break;
			
		case 'C':
		case 'c':
			totalamtdueC = 1995;
			
			cout << "How many hours were used? "; cin >> packageC;
			cout << "Total amount due is P" << totalamtdueC << endl;
			break;
	}
	
	_getch();
	return 0;
	
}

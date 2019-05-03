#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char choice;
	double billY, billN, demandch, consumpch, lateCh, prevMeter, recMeter;
	
	demandch = 35;
	consumpch = 1.10;
	lateCh = 20;
	
	cout << "Enter previous meter reading = "; cin >> prevMeter;
	cout << "Enter recent meter reading = "; cin >> recMeter;
	cout << "Have you paid your previous bill? [Y]es or [N]o "; cin >> choice;
	
	switch (choice)
	{
		case 'Y':
		case 'y':
			billY = demandch+recMeter*consumpch;
			
			cout << "Your balance is P" << billY << endl;
			break;
		
		case 'N':
		case 'n':
			billN = (demandch+prevMeter*consumpch)+(demandch+recMeter*consumpch)+lateCh;
			
			cout << "Your balance is P" << billN << endl;
			break;
	}
	_getch();
	return 0;
}

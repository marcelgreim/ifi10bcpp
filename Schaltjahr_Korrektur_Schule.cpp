#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
	int jahr;
	float rechnen;
	float rechnen2;
	float rechnen3;
	cout << "Bitte Jahreszahl eingeben!" << endl;
	cin >> jahr;
	rechnen= jahr % 4;
	rechnen2= jahr % 100;
	rechnen3= jahr % 400;
	
	if (rechnen !=0) 
	{
		cout << jahr << " ist kein Schaltjahr" << endl;
	}
	else
	{
		if (rechnen2 !=0 || rechnen3 == 0) 
		{
			cout << jahr << " ist ein Schaltjahr" << endl;
		}
		else
		{
			cout << jahr << " ist kein Schaltjahr" << endl;
		}
		
} 
 
 }

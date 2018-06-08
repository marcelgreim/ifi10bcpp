#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
	int m; // Erste Zahl
	int n; // Zweite Zahl
	int r; // Divisionsrest
	
	cout << "Bitte Zahl 1 eingeben!" << endl; // Ausgabe für Eingabe 1
	cin >> m; // Eingabe der Zahl1
	cout << "Bitte Zahl 2 eingeben!" << endl; // Ausgabe für Eingabe 2
	cin >> n; // Eingabe Zahl 2
	
	do {
		r=m%n;
		if (r==0){
			cout << "Wert ist: " << n << endl;
		}
		else {
			m=n;
			n=r;
			
		}
		}
		while(r!=0);
	}


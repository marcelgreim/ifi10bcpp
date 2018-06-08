#include <iostream>
#include <iomanip>

using namespace std;

int volumen(int, int, int);
int oberfl(int, int);

int main ()

{
	int laenge;
	int breite;
	int hoehe;
	int volumengesamt;
	int oberflgesamt;
	
	// Deklarierung der Variablen
	
	cout << "L\x84nge eingeben!" << endl;
	cin >> laenge;
	cout << endl; // Aufhübschen
	
	
	// Trennung zur Verdeutlichung
	
	cout << "Breite eingeben!" << endl;
	cin >> breite;
	cout << endl;
	
	// Trenung zur Verdeutlichung
	
	cout << "H\x94he eingeben!" << endl;
	cin >> hoehe;
	cout << endl; // Aufhübschen
	
	// Trennung zur Verdeutlichung
	
	volumengesamt=volumen(laenge, breite, hoehe);
	oberflgesamt=oberfl(laenge, breite);
	
	cout << "Volumen ist: " << volumengesamt << endl;
	cout << "Oblaeche ist: " << oberflgesamt << endl;
}

int volumen(int a, int b, int c)
{
	int volumen=a*b*c;
	return volumen;
}

int oberfl(int l, int b)
{
	int oberfl=l*b*6;
	return oberfl;
}

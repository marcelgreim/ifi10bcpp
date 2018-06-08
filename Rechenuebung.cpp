#include <iostream>  // Bibliotheken Laden
#include <iomanip>  // Bibliotheken laden

using namespace std; // Namespace laden

int main (void) { // Einsprung Hauptprogramm
	int Zahl1; // Integer Variable f�r Zahl 1
	int Zahl2; // Integer Variable f�r Zahl 2
	int Ergebnis; // Integer Variable f�r Ergebnis, da Ganzzahlen
	
		cout << "Bitte Zahl 1 eingeben!" << endl; // Ausgabe
		cin >> Zahl1; // Eingabe Zahl 1
		cout << "Bitte Zahl 2 eingeben!" << endl; // Ausgabe
		cin >> Zahl2; // Eingabe Zahl 2
		cout << "Bitte berechnen Sie " << Zahl1 << " * " << Zahl2 << endl; // Berechnung f�r Benutzer ausgeben
		cout << endl; // endl zur Entzerrung
		cout << "Bitte das Ergebnis eingeben!" << endl; // Ergebnis Abfragen
		cin >> Ergebnis; // Benutzereingabe des Ergebnisses einlesen
		
		if (Ergebnis > Zahl1*Zahl2){ // Abgleich ob Gr��er
			cout << "Schade! Leider ist Ihr Ergebnis zu gro�." << endl; // Ausgabe
		}
		else { 
				if (Ergebnis < Zahl1*Zahl2) { // Abgleich ob kleiner
					cout << "Schade! Leider ist Ihr Ergebnis zu klein." << endl; // Ausgabe
				}
				else { // Ansonsten korrekt
					cout << "Herzlichen Glueckwunsch! Ihr Ergebnis ist korrekt." << endl; // Ausgabe
				}
		}
}

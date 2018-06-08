#include <iostream> // Laden der Bibliothek für I/O
#include <iomanip> // Laden der Bibliothek für schönere Konsolenausgabe

using namespace std; // Namensraum laden

int main (void) { // Start des Hauptprogrammes
	int buchanzahl = 0; // Buchanzahl mit 0 laden
	const float buchpreis = 19.00; // Konstanter Buchpreis
	
		cout << "Bitte geben Sie die Anzahl der Buecher ein" << endl; // Ausgabe
		cin >> buchanzahl; // Eingabe
		
			if (buchanzahl < 26) { // Wenn Buchnazahl unter 26, dann einfach nur Rechnen
			cout << "Der Preis beträgt: " << buchanzahl*buchpreis << " Euro" << endl; // Rechnung + Ausgabe
			}
			else 
			{ // Ansonsten
				if (buchanzahl >=26 && buchanzahl<100) // Wenn Buchanzahl kleiner gleich 26 und unter 100
				{
				cout << "Der Preis beträgt: " << (buchanzahl*buchpreis) - (((buchanzahl*buchpreis)/100)*5) << " Euro" << endl; // Rechnung + Ausgabe
				} 
				else 
				{ // Ansonsten, alles über 100
					cout << "Der Preis beträgt: " <<  (buchanzahl*buchpreis) - (((buchanzahl*buchpreis)/100)*10) << " Euro" << endl; // Rechnung + Ausgabe
				}
			}
		
}

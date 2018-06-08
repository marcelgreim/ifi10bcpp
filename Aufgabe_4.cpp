#include <iostream> // Laden Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Manipulationsbibliothek

using namespace std; // Standard Namensraum verwenden

int main (void) { // Start Hauptfunktion
	int start; // Initialisieren der Startwert-Variable
	int stop; // Initialisieren der Stoppwert-Variable
	int counter;
	
	cout << "Bitte geben Sie einen Startwert ein!" << endl; // Ausgabe Abfrage Startwert
	cin >> start; // Einlesen des Startwerts in die Variable start
	
	cout << "Bitte geben Sie einen Stoppwert ein!" << endl; // Ausgabe Abfrage Stoppwert
	cin >> stop; // Einlesen des Stoppwerts in die Variable stop
	
	counter = start;
	
	if (start == stop) {
		cout << start;
	}
	
	else {
			if (start<stop) {
				
				for(counter; counter < stop; counter++) {
					cout << counter << ", ";
				}
				cout << stop;
			}
			
			else {
				for(counter; counter > stop; counter--) {
					cout << counter << ", ";
				}
				cout << stop;
			}
		}
}

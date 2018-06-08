#include <iostream> // Laden Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Manipulationsbibliothek

using namespace std; // Standard Namensraum verwenden

int main (void) { // Start Hauptfunktion

	int eingabe; // Variable für Eingabe initialisieren
	
	cout << "Bitte eine positive Zahl eingeben!" << endl; // Abfrage der Zahl
	cin >> eingabe; // Laden der eingegebenen Zahl in die Variable eingabe
	
	cout << endl; // Leerzeilen zwischen Eingabe und Ausgabe in der Konsole
	
	
	for(eingabe > 0; eingabe--;) { // Anfang for-Schleife
	
	
		if (eingabe==0) { // Anfang if, Wenn 0, dann einzeln ausgeben, um den Schönheitsfehler mit dem Komma zu vermeiden
			cout << setw(4) << "0" << endl; //setw Konsolenmanipulator für verbesserte Ausgabe, endl für Leerzeile zwischen Ausgabe von Kompilerausgabe
		} // Ende if
	
		else { // Anfang Else
			cout << setw(4) << eingabe << ", "; // "Normale Ausgabe", wenn nicht 0. Auch hier setw der Übersicht halber
		} // Ende Else
	} // Ende for-Schleife

} // Ende Hauptfunktion
	
	

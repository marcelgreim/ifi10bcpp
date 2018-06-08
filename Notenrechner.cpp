#include <iostream> // Laden I/O Bibliothek
#include <iomanip> // Laden der Konsolenmanipulationsbibliothek

using namespace std; // Standard Namespace verwenden

int main (void) { // Einsprungpunkt Hauptprogramm
	float note; // Variable für Noteneingabe
	float summe; // Variable zum zusammenrechnen
	float counter; // Counter für Anzahl der Noten
	char abfrage; // Abfrage der Weiterausführung
	float schnitt; // Schnitt als Float berechnen
	
	do { // Beginn der Schleife für die "Hauptfunktion"
		cout << "Bitte geben Sie eine Note ein" << endl; // Ausgabe der Abfrage für die Note
		cin >> note; // Note einlesen in Variable Note
		
			if (note >=1 && note <=6) // Abgleich ob es eine gültige Note ist oder nicht, wenn ja dann Zusammenrechnen und Counter +1 setzen
			{
				summe=summe+note; // Rechnung
				counter++; // Counter +1
			}
			else // Fehlermeldung ausgeben
			{
				cout << "Dies ist keine Note!" << endl; // Ausgabe des Fehler
			}
			
			cout << "Wollen Sie noch eine Note eingeben? Drücken Sie bitte J!" << endl; // Abfrage ob noch eine Note eingegeben werden soll
			cin >> abfrage; // Einlesen der Abfrage
	}
	while (abfrage=='J'); // do-Schleife bis Abfrage groß J entspricht
	
	schnitt=summe/counter; // Berechnen des Schnittes
	
	cout << "Ihr Schnitt beträgt: " << schnitt << endl; // Ausgabe Schnitt
	cout << "Sie haben: " << counter << " Noten eingegeben!" << endl; // Ausgabe Counter
}

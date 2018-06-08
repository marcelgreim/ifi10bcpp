#include <iostream> // I/O Bibliothek laden
#include <iomanip> // Bibliothek für Konsolenausgabenmanipulation laden

using namespace std; // Namespace ist Standard

int main (void) { // Laden des Hauptprogrammes
	int gefahren; // Variable für Eingabe der Gefahrenen Geschwindigkeit
	int erlaubt; // Variable für Eingabe der Erlaubten Geschwindigkeit
	char abfrage; // Variable für den Abgleich der Wiederholung
	int differenz; // Berechnung der Differenz als Ganzzahl
	
	do {
	
	cout << "Bitte geben Sie die Geschwindigkeitsbegrenzung ein!" << endl; // Ausgabe für Abfrage der Geschwindkeitsbegrenzung
	cin >> erlaubt; // Eingabe der Erlaubten Geschwindigkeit
	cout << "Bitte geben Sie Ihre gefahrene Geschwindigkeit ein!" << endl; // Ausgabe für Abfrage der gefahrenen Geschwindigkeit
	cin >> gefahren; // Eingabe der gefahrenen Geschwindigkeit
	differenz = gefahren-erlaubt; // Berechnung der Differenz
	
	
	
		if (differenz <= 0) 
		{
			cout << "Kein Bußgeld zu zahlen!" << endl;
		}
		else 
		{
			if (differenz <=20)
			{
				cout << "Die kostet 30 EUR Bußgeld" << endl;
			}
			else
			{
				if (differenz <= 40)
				{
					cout << "Dies kostet 100 Euro Bußgeld" << endl;
				}
				else
				{
					cout << "Dies kostet 150 Euro Bußgeld und 1 Monat Fahrverbot" << endl;
				}
			}
		}
		
		cout << "Wiederholen? J oder j Drücken" << endl;
		cin >> abfrage;

	}
	while(abfrage=='J' || abfrage== 'j');
}

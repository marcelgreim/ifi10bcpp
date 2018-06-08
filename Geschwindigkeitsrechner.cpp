#include <iostream> // I/O Bibliothek laden
#include <iomanip> // Bibliothek f�r Konsolenausgabenmanipulation laden

using namespace std; // Namespace ist Standard

int main (void) { // Laden des Hauptprogrammes
	int gefahren; // Variable f�r Eingabe der Gefahrenen Geschwindigkeit
	int erlaubt; // Variable f�r Eingabe der Erlaubten Geschwindigkeit
	char abfrage; // Variable f�r den Abgleich der Wiederholung
	int differenz; // Berechnung der Differenz als Ganzzahl
	
	do {
	
	cout << "Bitte geben Sie die Geschwindigkeitsbegrenzung ein!" << endl; // Ausgabe f�r Abfrage der Geschwindkeitsbegrenzung
	cin >> erlaubt; // Eingabe der Erlaubten Geschwindigkeit
	cout << "Bitte geben Sie Ihre gefahrene Geschwindigkeit ein!" << endl; // Ausgabe f�r Abfrage der gefahrenen Geschwindigkeit
	cin >> gefahren; // Eingabe der gefahrenen Geschwindigkeit
	differenz = gefahren-erlaubt; // Berechnung der Differenz
	
	
	
		if (differenz <= 0) 
		{
			cout << "Kein Bu�geld zu zahlen!" << endl;
		}
		else 
		{
			if (differenz <=20)
			{
				cout << "Die kostet 30 EUR Bu�geld" << endl;
			}
			else
			{
				if (differenz <= 40)
				{
					cout << "Dies kostet 100 Euro Bu�geld" << endl;
				}
				else
				{
					cout << "Dies kostet 150 Euro Bu�geld und 1 Monat Fahrverbot" << endl;
				}
			}
		}
		
		cout << "Wiederholen? J oder j Dr�cken" << endl;
		cin >> abfrage;

	}
	while(abfrage=='J' || abfrage== 'j');
}

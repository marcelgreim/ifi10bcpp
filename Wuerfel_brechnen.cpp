/* Aufgabe 1
Schreiben Sie ein Programm, welches f�r eine angegebene Kantenl�nge
die Oberfl�che und das Volumen eines W�rfels berechnet! */

#include <iostream> // Header

using namespace std; // Namespace Definieren

int main () // Einsprung

{

float laenge; // Float f�r L�nge
float breite; // Float f�r Breite
float hoehe; // Float f�r H�he

float rechobfl; // Float f�r Oberfl�chenberechnung
float rechvol; // Float f�r Volumenberechnung


	cout << "Bitte geben Sie die L\x84nge ein!" << endl; // BenutzerAUSgabe
	cin >> laenge; // Einlesen der Daten in die Variable
	cout << endl; // Ausgabe einer endl zur Aufh�bschung
	
// Leerzeile zur Trennung der ersten Eingabe	
	
	cout << "Bitte geben Sie die Breite ein!" << endl;
	cin >> breite;
	cout << endl;
	
// Leerzeile zur Trennung der zweiten Eingabe

	cout << "Bitte geben Sie die H\x94he ein!" << endl;
	cin >> hoehe;
	cout << endl;

// Leerzeilr zur Trennug der dritten Eingabe

// Rechnungen

	rechobfl= laenge*breite*6;
	rechvol= laenge*breite*hoehe;
	
// Ausgabe der Rechnungen

	cout << "Die Oberfl\x84\che f\x81r den W\x81rfel betr\x84gt: " << rechobfl << endl; // Ausgabe Oberfl�che
	cout << endl; // Zur Versch�nerung
	cout << "Das Volumen des W\x81rfels betr\x84gt: " << rechvol << endl; // Ausgabe Volumen
	cout << endl; // Zur Versch�nerung
	
	return 0;
}

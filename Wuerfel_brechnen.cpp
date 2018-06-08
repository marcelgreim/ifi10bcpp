/* Aufgabe 1
Schreiben Sie ein Programm, welches für eine angegebene Kantenlänge
die Oberfläche und das Volumen eines Würfels berechnet! */

#include <iostream> // Header

using namespace std; // Namespace Definieren

int main () // Einsprung

{

float laenge; // Float für Länge
float breite; // Float für Breite
float hoehe; // Float für Höhe

float rechobfl; // Float für Oberflächenberechnung
float rechvol; // Float für Volumenberechnung


	cout << "Bitte geben Sie die L\x84nge ein!" << endl; // BenutzerAUSgabe
	cin >> laenge; // Einlesen der Daten in die Variable
	cout << endl; // Ausgabe einer endl zur Aufhübschung
	
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

	cout << "Die Oberfl\x84\che f\x81r den W\x81rfel betr\x84gt: " << rechobfl << endl; // Ausgabe Oberfläche
	cout << endl; // Zur Verschönerung
	cout << "Das Volumen des W\x81rfels betr\x84gt: " << rechvol << endl; // Ausgabe Volumen
	cout << endl; // Zur Verschönerung
	
	return 0;
}

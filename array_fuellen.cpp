#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Konsolenmanipulationsbibliothek
#include <cstdlib> // CSTDLIB Laden für random Funktionen
#include <ctime> // Laden der Bibliothek für Uhrzeitfunktionen

// #define RANDMAX ist nicht wichtig für uns, da dies im Sourcefile als Standard definiert ist.

using namespace std; // Wir verwenden den Standardnamensraum

int zufall (); // Wir sagen dem Compiler, das wir eine Funktion mit dem Namen "zufall" später definieren
int fuellung (); // Wir brauchen hier keine Übergabeparameter, warum auch?
int search (int); // Wir brauchen eine Int (Übergabe des Gesuchten Wertes von der Main

int filler [1000] = {0}; // Das Array "filler" wird Global angelegt und wird komplett mit Nulen beschrieben

int minrand = 0; // Globale Variable für Minimumrandom, ist zwar nicht gut, aber OK für dieses Experiment
int maxrand = 0; // Globale Variable für Maximumrandom, ist zwar nicht gut, aber OK für dieses Experiment

int main () { // Start der Mainfunktion

	time_t zeit; // Variable zeit mit Datentyp time_t initialisieren
	zeit=time(0); // Variable zeit auf aktuelle Zeit setzen
	srand (zeit); // srand mit "zeit" füttern
	
	// Alle diese 3 Schritte oben ( ^^^^^^ ) sind für eine halbwegs gute Randomausgabe wichtig!
	
	int suche; // Integer für Benutzereingabe der gesuchten Zahl
	
	cout << "Bitte geben Sie die Minimale Zufallszahl ein!" << endl; // Abfrage der Minimum Zufallszahl
	cin >> minrand; // Wir schreiben das Minimum in die Globale Variable "minrand"
	
	
	cout << "Bite geben Sie die Maximale Zufallszahl ein!" << endl; // Abfrage der Maximalen Zufallszahl
	cin >> maxrand; // Wir schreiben das Maximum in die Globale Variable "maxrand"

	cout << "Bitte gesuchte Zahl eingeben!" << endl; // Abfrage der gesuchten Zahl
	cin >> suche; // Speichern der gesuchten Zahl in der Variable "suche"
	
	fuellung(); //Aufrufen der Funktion Fuellung, damit fuellen wir unser Array mit Randomzahlen
	
	search(suche); // Aufrufen der Funktion "search" welche das Array durchsucht
	
	
} // Ende der Mainfunktion

int zufall () { // Funktion für Zufallszahlenausgabe
	int randomzahl; // Wir initialisieren hier den Integer "Randomzahl"
	randomzahl=rand()%(maxrand-minrand+1)+minrand; // Formel für "Zufallszahlenberechnung"
	return randomzahl; // Wir geben den Integer "randomzahl" zurück
} // Ende Funktion für Zufallszahlenausgabe

int fuellung () { // Array Auffuellen
	for (int counter = 1000; counter > 0; counter--) { // Start For-Schleife für die Befüllung
		filler [counter] = zufall(); // Auffüllung mit Werten von der Funktion "Zufall"
	} // Ende For-schleife		
} // Ende Funktion "fuellung"

int search (int gesucht) { // Start Funktion search mit der Zahl von "Main" Integer suche
		for (int counter = 1000; counter > 0; counter--) { // Beginn For-Schleife
		if (filler [counter] == gesucht) {
			counter--; // Null Zählt auch als Zahl / Tabellenwert, also Setzen wir das alles immer eins herunter
			cout << "Die gesuchte Zahl ist das " << counter << ".te Element der Tabelle" << endl;
		}
			else {}; // Else ist leer, Ausgabe von nichtbekannten Zahlen ist sinnlos, kann aber mit Abgleich noch hinzugefügt werden
			} // Ende der For-Schleife
} // Ende der Funktion "search"



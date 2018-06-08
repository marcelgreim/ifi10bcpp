#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Konsolenmanipulationsbibliothek
#include <cstdlib> // CSTDLIB Laden f�r random Funktionen
#include <ctime> // Laden der Bibliothek f�r Uhrzeitfunktionen

// #define RANDMAX ist nicht wichtig f�r uns, da dies im Sourcefile als Standard definiert ist.

using namespace std; // Wir verwenden den Standardnamensraum

int zufall (); // Wir sagen dem Compiler, das wir eine Funktion mit dem Namen "zufall" sp�ter definieren
int fuellung (); // Wir brauchen hier keine �bergabeparameter, warum auch?
int search (int); // Wir brauchen eine Int (�bergabe des Gesuchten Wertes von der Main

int filler [1000] = {0}; // Das Array "filler" wird Global angelegt und wird komplett mit Nulen beschrieben

int minrand = 0; // Globale Variable f�r Minimumrandom, ist zwar nicht gut, aber OK f�r dieses Experiment
int maxrand = 0; // Globale Variable f�r Maximumrandom, ist zwar nicht gut, aber OK f�r dieses Experiment

int main () { // Start der Mainfunktion

	time_t zeit; // Variable zeit mit Datentyp time_t initialisieren
	zeit=time(0); // Variable zeit auf aktuelle Zeit setzen
	srand (zeit); // srand mit "zeit" f�ttern
	
	// Alle diese 3 Schritte oben ( ^^^^^^ ) sind f�r eine halbwegs gute Randomausgabe wichtig!
	
	int suche; // Integer f�r Benutzereingabe der gesuchten Zahl
	
	cout << "Bitte geben Sie die Minimale Zufallszahl ein!" << endl; // Abfrage der Minimum Zufallszahl
	cin >> minrand; // Wir schreiben das Minimum in die Globale Variable "minrand"
	
	
	cout << "Bite geben Sie die Maximale Zufallszahl ein!" << endl; // Abfrage der Maximalen Zufallszahl
	cin >> maxrand; // Wir schreiben das Maximum in die Globale Variable "maxrand"

	cout << "Bitte gesuchte Zahl eingeben!" << endl; // Abfrage der gesuchten Zahl
	cin >> suche; // Speichern der gesuchten Zahl in der Variable "suche"
	
	fuellung(); //Aufrufen der Funktion Fuellung, damit fuellen wir unser Array mit Randomzahlen
	
	search(suche); // Aufrufen der Funktion "search" welche das Array durchsucht
	
	
} // Ende der Mainfunktion

int zufall () { // Funktion f�r Zufallszahlenausgabe
	int randomzahl; // Wir initialisieren hier den Integer "Randomzahl"
	randomzahl=rand()%(maxrand-minrand+1)+minrand; // Formel f�r "Zufallszahlenberechnung"
	return randomzahl; // Wir geben den Integer "randomzahl" zur�ck
} // Ende Funktion f�r Zufallszahlenausgabe

int fuellung () { // Array Auffuellen
	for (int counter = 1000; counter > 0; counter--) { // Start For-Schleife f�r die Bef�llung
		filler [counter] = zufall(); // Auff�llung mit Werten von der Funktion "Zufall"
	} // Ende For-schleife		
} // Ende Funktion "fuellung"

int search (int gesucht) { // Start Funktion search mit der Zahl von "Main" Integer suche
		for (int counter = 1000; counter > 0; counter--) { // Beginn For-Schleife
		if (filler [counter] == gesucht) {
			counter--; // Null Z�hlt auch als Zahl / Tabellenwert, also Setzen wir das alles immer eins herunter
			cout << "Die gesuchte Zahl ist das " << counter << ".te Element der Tabelle" << endl;
		}
			else {}; // Else ist leer, Ausgabe von nichtbekannten Zahlen ist sinnlos, kann aber mit Abgleich noch hinzugef�gt werden
			} // Ende der For-Schleife
} // Ende der Funktion "search"



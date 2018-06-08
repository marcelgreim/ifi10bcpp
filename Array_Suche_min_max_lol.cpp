#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Konsolenmanipulationsbibliothek
#include <cstdlib> // CSTDLIB Laden f�r random Funktionen
#include <ctime> // Laden der Bibliothek f�r Uhrzeitfunktionen

// #define RANDMAX ist nicht wichtig f�r uns, da dies im Sourcefile als Standard definiert ist.

using namespace std; // Wir verwenden den Standardnamensraum

int zufall (); // Wir sagen dem Compiler, das wir eine Funktion mit dem Namen "zufall" sp�ter definieren
int fuellung (); // Wir brauchen hier keine �bergabeparameter, warum auch?
int suchemax(); // Funktion f�r die Max Zahl Suche
int suchemin(); // Funktion f�r die Min Zahl Suche

int filler[1000] = {0}; // Das Array "filler" wird Global angelegt und wird komplett mit Nullen beschrieben

int minrand = 0; // Globale Variable f�r Minimumrandom, ist zwar nicht gut, aber OK f�r dieses Experiment
int maxrand = 0; // Globale Variable f�r Maximumrandom, ist zwar nicht gut, aber OK f�r dieses Experiment

int main () { // Start der Mainfunktion

	time_t zeit; // Variable zeit mit Datentyp time_t initialisieren
	zeit=time(0); // Variable zeit auf aktuelle Zeit setzen
	srand (zeit); // srand mit "zeit" f�ttern
	
	// Alle diese 3 Schritte oben ( ^^^^^^ ) sind f�r eine halbwegs gute Randomausgabe wichtig!
	
	
	cout << "Bitte geben Sie die Minimale Zufallszahl ein!" << endl; // Abfrage der Minimum Zufallszahl
	cin >> minrand; // Wir schreiben das Minimum in die Globale Variable "minrand"
	
	
	cout << "Bite geben Sie die Maximale Zufallszahl ein!" << endl; // Abfrage der Maximalen Zufallszahl
	cin >> maxrand; // Wir schreiben das Maximum in die Globale Variable "maxrand"

	
	fuellung(); //Aufrufen der Funktion Fuellung, damit fuellen wir unser Array mit Randomzahlen
	suchemax(); // Aufrufen der Suchfunktion f�r die Maxzahl
	suchemin(); // Aufrufen der Suchefunktion f�r die Minzahl
	
	
} // Ende der Mainfunktion

int zufall () { // Funktion f�r Zufallszahlenausgabe
	int randomzahl; // Wir initialisieren hier den Integer "Randomzahl"
	randomzahl=rand()%(maxrand-minrand+1)+minrand; // Formel f�r "Zufallszahlenberechnung"
	return randomzahl; // Wir geben den Integer "randomzahl" zur�ck
} // Ende Funktion f�r Zufallszahlenausgabe

int fuellung () { // Array Auffuellen
	for (int counter = 1001; counter >= 0; counter--) { // Start For-Schleife f�r die Bef�llung
		filler [counter] = zufall(); // Auff�llung mit Werten von der Funktion "Zufall"
	} // Ende For-schleife		
} // Ende Funktion "fuellung"


int suchemax () { // Funktion um die Gr��te Zahl zu finden
	int speicher = 0; // Deklaration und Initialisierung von Variable Speicher
	speicher = filler[0]; // Speicher Variable mit 1 Stelle Laden 
	int arzahl = 1000; // Anazhl der Zahlen im Array
	int speicherzwei; // Scope Problem Umgehen
	
	for (int counter = 0; counter < arzahl; counter++) {
	if (filler[counter] > speicher) {
			speicher = filler [counter];
			speicherzwei = counter;
	}
	
	else {
	
		}
	}
	cout << "Die gr��te Zahl ist: " << speicher << " an Stelle " << speicherzwei <<  endl;
}

int suchemin () { // Funktion um die Kleinste Zahl
	int speicher = 0; // Deklaration und Initialisierung von Variable Speicher
	speicher = filler[0]; // Speicher Variable mit 1 Stelle Laden 
	int arzahl = 1000; // Anazhl der Zahlen im Array
	int speicherzwei; // Scope Problem Umgehen
	
	for (int counter = 0; counter < arzahl; counter++) {
	if (filler[counter] < speicher) {
			speicher = filler [counter];
			speicherzwei = counter;
	}
	
	else {
	
		}
	}
	cout << "Die kleinste Zahl ist: " << speicher << " an Stelle " << speicherzwei <<  endl;
}




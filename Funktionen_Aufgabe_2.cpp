#include <iostream> // Laden der Bibliothek f�r die Ein- und Ausgabe
#include <iomanip> // Laden der Bibliothek f�r die Konsolenmanipulation

using namespace std; // Standart Namenspace verwenden

int potenz (int, int); // Compiler muss vor der Funktion wissen, dass es diese gibt!!!!

int main () { // Start der Hauptfunktion

	int exponent; // Variable f�r den Exponenten zum Einlesen
	int basis; // Variable f�r die Basis zum Einlesen
	
	cout << "Bitte Basis eingeben!" << endl; // Abfrage der Basis
	cin >> basis; // Laden der Basis in die Variable basis

	cout << "Bitte Exponenten eingeben!" << endl; // Abfrage des Exponenten
	cin >> exponent; // Laden des Exponenten in die Variable exponent
	
	cout << "Ergebnis ist: " << potenz(basis, exponent) << endl; // Ausgabe des Ergebnis mit der R�ckgabe von der Funktion
	
} // Ende Hauptfunktion

int potenz(int a, int b) { // Start der Nebenfunktion
	int rechnung = 1; // Variable Rechnung mit Wert 1 initialisieren damit die Rechnungen funktionen
	int counter = b; // Variable Counter auf �bergabewert b setzen
	
	if (counter==0) { /* Basis hoch 0 ergibt immer 1, also Abfragen */} // If ist hier abgeschlossen
	
	else { // Wenn nicht hoch 0, dann do/while Ausf�hren!
	
		do{ // Anfang Do-Schleife
			rechnung=rechnung*a; // Rechnung
			counter--; // Counter
		} // Ende Do
		while (counter > 0); // Do wird ausgef�hrt bis Erreicht!
	
		} // Ende der Else-Abfrage
	
	return rechnung; // Rechnung wird an Main zur�ckgegeben
} // Ende Nebenfunktion

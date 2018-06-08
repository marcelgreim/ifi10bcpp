#include <iostream> // Laden der Bibliothek für die Ein- und Ausgabe
#include <iomanip> // Laden der Bibliothek für die Konsolenmanipulation

using namespace std; // Standart Namenspace verwenden

int sum (int); // Compiler muss vor der Funktion wissen, dass es diese gibt!!!!

int main () { // Start der Hauptfunktion

	int eingabe; // Variable initialisieren
	
	cout << "Bitte positive Ganzzahl eingeben!" << endl; // Ausgabe für die Benutzereingabe
	cin >> eingabe; // Einlesen in die Variable eingabe

	cout << "Rechnung: " << sum(eingabe) /* In dieser Variable wird eingabe von der Hauptfunktion verwendet */ << endl; 
	// Ausgabe mit dem return-Wert der Funktion "sum"
	
} // Ende Hauptfunktion

int sum (int eing /*Eingabewert von "sum(eingabe)" */) { // Beginn der Rechenfunktion

	int summe; // Initialisieren der Variable Summe
	
	for (int i; i <= eing; i++) { // Anfang der For-Schleife // Initialisieren von i, wenn i kleiner oder gleich Eingabewert, Inkrementiere i um 1
		summe=summe+i; // Rechnen, summe (variable) = summe von letztem Durchlauf + i
	} // Ende der For-Scheife

	return summe; // Variable welche zurückgegben wird, an sum(eingabe) bei cout in der Mainfunktion
	
} // Ende Rechenfuntion


#include <iostream> // Laden der Bibliothek f�r die Ein- und Ausgabe
#include <iomanip> // Laden der Bibliothek f�r die Konsolenmanipulation

using namespace std; // Standart Namenspace verwenden

int sum (int); // Compiler muss vor der Funktion wissen, dass es diese gibt!!!!

int main () { // Start der Hauptfunktion

	int eingabe; // Variable initialisieren
	int funktion;
	
	
	cout << "Bitte positive Ganzzahl eingeben!" << endl; // Ausgabe f�r die Benutzereingabe
	cin >> eingabe; // Einlesen in die Variable eingabe

	funktion=sum(eingabe);
	
	if (funktion==0) {
		cout << "Fehler in der Rechnung" << endl;
	}
	
	else {
		cout << "Rechnung: " << sum(eingabe) /* In dieser Variable wird eingabe von der Hauptfunktion verwendet */ << endl; 
	}
	// Ausgabe mit dem return-Wert der Funktion "sum"
	
} // Ende Hauptfunktion

int sum (int eing /*Eingabewert von "sum(eingabe)" */) { // Beginn der Rechenfunktion

	int summe; // Initialisieren der Variable Summe
	int error = 0;
	
	for (int i; i <= eing; i++) { // Anfang der For-Schleife // Initialisieren von i, wenn i kleiner oder gleich Eingabewert, Inkrementiere i um 1
		summe=summe+i; // Rechnen, summe (variable) = summe von letztem Durchlauf + i
	} // Ende der For-Scheife
	
	if(summe > 2147483647 || summe < -2147483648) {
		return error;
	}

	else {
	return summe; // Variable welche zur�ckgegben wird, an sum(eingabe) bei cout in der Mainfunktion
}
} // Ende Rechenfuntion
/* TODO (#1#): Wie ist die Aufgabe gemeint? */
/* Wert Gr��er */

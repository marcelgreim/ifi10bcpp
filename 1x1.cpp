#include <iostream> // Bibliothek f�r Konsolenein- und ausgabe laden
#include <iomanip> // Bibliothek f�r Konsolenmanipulation laden

using namespace std; // Benutzung des Standard Namespaces

int main (void) { // Start der Hauptfunktion
		int ergebnis=0; //
		int i=1; // Erstzuwei�ung f�r Variable i
		int j=1; // Erstzuwei�ung f�r Variable j
		
		do {  // Do-Schleife solange bis i<=10
			
						do  { // Do-Schleife solange j<=10
							ergebnis=i*j; // Multiplizieren und Speichern in Variable ergebnis
							cout << setw(5) << ergebnis << " " ; // Ausgbe mit setw als "Tabelle"
							j++; // Variable "j" um 1 erh�hen
							}
						while (j<=10); // Mache so lange bis j <=10
						
		cout << endl; // << Zeilenumbruch nach erste Malberechnung
		j=1; // Zur�cksetzen von j auf 1 f�r neuen "Start"
		i++; // Variable "i" um 1 erh�hen
			
		  }
		while (i<=10); // Bis Variable "i" <=10
}



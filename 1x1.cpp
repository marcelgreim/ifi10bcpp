#include <iostream> // Bibliothek für Konsolenein- und ausgabe laden
#include <iomanip> // Bibliothek für Konsolenmanipulation laden

using namespace std; // Benutzung des Standard Namespaces

int main (void) { // Start der Hauptfunktion
		int ergebnis=0; //
		int i=1; // Erstzuweißung für Variable i
		int j=1; // Erstzuweißung für Variable j
		
		do {  // Do-Schleife solange bis i<=10
			
						do  { // Do-Schleife solange j<=10
							ergebnis=i*j; // Multiplizieren und Speichern in Variable ergebnis
							cout << setw(5) << ergebnis << " " ; // Ausgbe mit setw als "Tabelle"
							j++; // Variable "j" um 1 erhöhen
							}
						while (j<=10); // Mache so lange bis j <=10
						
		cout << endl; // << Zeilenumbruch nach erste Malberechnung
		j=1; // Zurücksetzen von j auf 1 für neuen "Start"
		i++; // Variable "i" um 1 erhöhen
			
		  }
		while (i<=10); // Bis Variable "i" <=10
}



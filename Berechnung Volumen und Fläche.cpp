/* Berechnung des Flächeninhaltes und des Volumens eines Quaders(?) mit zwei Nebenfunktionen .
Zusätzlich noch ein paar Abfragen eingebaut, was der Benutzer denn ausrechnen will*/

#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Konsolenmanipulationsbibliothek

using namespace std; // Wir verwenden den Standardnamesraum

int volumen (int, int, int); // Wir geben dem Compiler mit, das wir eine Funktion mit dem Namen volumen unterhalb der Main-Funktion erstellen (3x int, weil 3x int übergeben werden muss)
int flaecheninhalt (int, int); // Wir geben dem Compiler mit, das wir eine Funktion mit dem Namen flaecheninhalt unterhalb der Main-Funktion erstellen (2x int, weil 2x int übergeben werden muss)

int main () { // Start der Hauptfunktion
	int laenge; // Initialisierung der Variable laenge
	int breite; // Initialisierung der Variable breite
	int hoehe; // Initialisierung der Variable hoehe
	int abfrage; // Initialiserung der Variable abfrage
	
	cout << "Was wollen Sie berechnen? Geben Sie 1 fuer Volumen, 2 fuer den Flaecheninhalt und 3 fuer beides ein!" << endl; // Wir fragen den Benutzer ab, was er denn ausrechnen will
	cin >> abfrage; // Laden der Eingabe in die Variable abfrage
	
		if (abfrage==1) { // Vergleich der Variable abfrage, wenn 1 dann Volumen rechnen
			
			cout << "Bitte geben Sie die Laenge an!" << endl; // Benutzerabfrage nach der Länge
			cin >> laenge; // Benutzereingabe Länge wird in Variable laenge gespeichert
	
			cout << "Bitte geben Sie die Breite an!" << endl; // Benutzerabfrage nach der Breite
			cin >> breite; // Benutzereingabe Breite wird in Variable breite gespeichert
	
			cout << "Bitte geben Sie die Hoehe an!" << endl; // Benutzerabfrage nach der Höhe
			cin >> hoehe; // Benutzereingabe Höhe wird in Variable hoehe gespeichert
				
			cout << "Das Volumen betraegt: " << volumen(laenge, breite, hoehe) << "m^3" /* Angabe der Größe */ << endl; // Ausgabe des Volumen mit integriertem Funktionsaufruf der Funktion volumen
		} // Ende If Abfrage 1
		
		else { // Ansonsten
		
			if (abfrage==2) { // Abfrage Vergleichen mit 2, wenn 2, dann Flaecheninhalt
			
				cout << "Bitte geben Sie die Laenge an!" << endl; // Benutzerabfrage nach der Länge
				cin >> laenge; // Benutzereingabe Länge wird in Variable laenge gespeichert
	
				cout << "Bitte geben Sie die Breite an!" << endl; // Benutzerabfrage nach der Breite
				cin >> breite; // Benutzereingabe Breite wird in Variable breite gespeichert
			
				cout << "Der Flaecheninhalt betraegt: " << flaecheninhalt(laenge, breite) << "m^2" /* Angabe der Größe */ << endl; // Ausgabe des Flächeninhaltes mit integriertem Funktionsaufruf der Funktion flaecheninhalt

			} // Ende der If Abfrage 2
			
			else { // Ansonsten
				
			cout << "Bitte geben Sie die Laenge an!" << endl; // Benutzerabfrage nach der Länge
			cin >> laenge; // Benutzereingabe Länge wird in Variable laenge gespeichert
	
			cout << "Bitte geben Sie die Breite an!" << endl; // Benutzerabfrage nach der Breite
			cin >> breite; // Benutzereingabe Breite wird in Variable breite gespeichert
	
			cout << "Bitte geben Sie die Hoehe an!" << endl; // Benutzerabfrage nach der Höhe
			cin >> hoehe; // Benutzereingabe Höhe wird in Variable hoehe gespeichert
			
			cout << "Der Flaecheninhalt betraegt: " << flaecheninhalt(laenge, breite) << "m^2" /* Angabe der Größe */ << endl; // Ausgabe des Flächeninhaltes mit integriertem Funktionsaufruf der Funktion flaecheninhalt
			cout << "Das Volumen betraegt: " << volumen(laenge, breite, hoehe) << "m^3" /* Angabe der Größe */ << endl; // Ausgabe des Volumen mit integriertem Funktionsaufruf der Funktion volumen
		
			} // Ende der Else 2
			
			} // Ende der Else 1
			
} // Ende der Hauptfunktion

int volumen(int laenge, int breite, int hoehe) { // Beginn der Nebenfunktion volumen
	int rechnung; // Initialisierung von dem Integer rechnung, für den Returnwert
	rechnung=(laenge*breite*hoehe); // Berechnung
	return rechnung; // Rückgabe des Ergebnisses an die Mainfunktion
} // Ende der Nebenfunktion volumen

int flaecheninhalt(int laenge, int breite) { // Beginn der Nebenfunktion flaecheninhalt 
	int rechnung; // Initialisierung von dem Integer rechnung, für den Returnwert
	rechnung=(laenge*breite); // Berechnung
	return rechnung; // Rückgabe des Ergebnisses an die Mainfunktion
} // Ende der Nebenfunktion flaecheninhalt

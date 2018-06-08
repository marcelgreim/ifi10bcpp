/* Programm zum Berechnen des Satz des Pythagoras mit Benutzereingabe und Abfrage was gesucht wird, in diesem
Fall hier wird kein Exceptionhandling betrieben, 10.03.2017 */

#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <iomanip> // Laden der Bibliothek für Konsolenmanipulation
#include <math.h> // Laden der Bibliothek für mathematische Funktionen

using namespace std; // Standard Namensraum laden

float hypothenusec(float, float); // Wir geben dem Compiler mit, dass wir eine Funktion hypthenuse haben
float kathete(float, float); // Wir geben dem Compiler mit, dass wir eine Funktion kathete haben
//float hypothenusec2(float, float); // Wir geben dem Compiler mit, dass wir eine Funktion float hypothenusec2 haben
int main () { // Beginn der Hauptfunktion
	char auswahl; // Initialisierung der Variable für die Auswahl
	float kathete1; // Initialisierung der Variable für Kathete1
	float kathete2; // Initialisierung der Variable für Kathete2
	float hypothenuse; // Initialisierung der Variable für die Hypothenuse
	
	cout << "Was ist gegeben? Ist die Hypothenuse (c) gegeben? Dann bestätigen Sie dies mit J ansonsten bitte N eingeben!" << endl; // Wir fragen den Benutzer ob die Hypothenuse (c) gegeben ist oder nicht
	cin >> auswahl; // Benutzereingabe wird in die Variable auswahl gespeichert
	
	if (auswahl=='J') { // Start des if-Abgleiches, wenn J (also Hypothenuse gegeben)
		cout << "Bitte geben Sie die Länge der Hypothenuse ein!" << endl; // Abfrage nach der Hypothenuse
		cin >> hypothenuse; // Speichern in die Variable Hypothenuse
		cout << "Bitte geben Sie die Länge der Kathete ein!" << endl; // Abfrage der Kathete
		cin >> kathete1; // Speichern in die Variable kathete1
		cout << "Die Kathete ist: " << hypothenusec(kathete1, hypothenuse) << "^2"<< " lang" << endl; // Funktionsaufruf hypothenusec, welche die Kathete ausrechnet wenn die Hypothenuse gegeben ist
		
	} // Ende des if-Abgleiches
	
	else { // Beginn des else
		cout << "Bitte geben Sie die Länge der Kathete a ein!" << endl; // Benutzer wird nach der Länge der Kathete a gefragt
		cin >> kathete1; // Speichern der Länge der Kathete a in die Variable kathete1
		cout << "Bitte geben Sie die Länge der Kathete b ein!" << endl; // Benutzer wird nach der Länge der Kathete b gefragt
		cin >> kathete2; // Speichern der Länge der Kathete b in die Variable kathete2
		cout << "Das Ergebnis lautet: " << kathete(kathete1, kathete2) << "^2"<< " lang" << endl; // Funktionsaufruf kathete, zur Berechnung der Hypothenuse
	}
	
} // Ende Hauptfunktion

float hypothenusec(float kathete1, float hypothenuse) { // Begin der Nebenfunktion hypothenusec, zur Berechnung von der Kathete
	float kathete2; // Rechenvariable
	kathete2=(hypothenuse*hypothenuse)-(kathete1*kathete1); // Ausrechnen der Kathete (hoch wird berechnet)
	kathete2=sqrt(kathete2); // Wurzel ziehen
	return kathete2; // Rückgabe von kathete2 an die Hauptfunktion, beim Funktionsaufruf
} // Ende der Nebenfunktion hypothenusec

float kathete(float kathete1, float kathete2) { // Beginn der Nebenfunktion kathete, zur Berechnung der Hypothenuse
	float hypothenuse; // Initialisierung der Variable hypothenuse, für die Berechnung der Hypothenuse
	hypothenuse=(kathete1*kathete1)+(kathete2*kathete2); // "Normaler Satz des Pythagoras"
	hypothenuse=sqrt(hypothenuse); // Wir müssen noch die Wurzel ziehen
	return hypothenuse; // Rückgabe an den Funktionsaufruf kathete
}
/*
float hypothenusec2(float kathete2, float hypothenuse) { // Begin der Nebenfunktion hypothenusec, zur Berechnung von der Kathete
	float kathete3; // Rechenvariable
	kathete3=(hypothenuse*hypothenuse)-(kathete2*kathete2); // Ausrechnen der Kathete (hoch wird berechnet)
	kathete3=sqrt(kathete3); // Wurzel ziehen
	return kathete3; // Rückgabe von kathete3 an die Hauptfunktion, beim Funktionsaufruf
} // Ende der Nebenfunktion hypothenusec2 */




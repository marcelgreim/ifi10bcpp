/* Aufgabe: 

-> Einen Taschenrechner programmieren <-

Anforderungen:

-Jede Grundrechenart in eine eigene Funktion packen
-Berechnung mit Nachkommastellen
-Rechnen im Minusbereich
-Variablen müssen sinnvoll benannt werden

Abfragen:
-Rechenart
-Zahlen

Erweiterungen:
-Abfangen des Fehlers, dass durch 0 geteilt wird
-Programm in eine Schleife versetzen */

#include <iostream> // Laden der Bibliothek für Ein- und Ausgabe
#include <iomanip> // Laden der Konsolenmanipulationsbibliothek
#define 

using namespace std; // Standard Namesraum verwenden

float addition (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "addition" mit 2 float Variablen haben und die Funktion selbst float ist
float subtraktion (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "subtraktion" mit 2 float Variablen haben und die Funktion selbst float ist
float mal (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "mal" mit 2 float Variablen haben und die Funktion selbst float ist
float geteilt (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "geteilt" mit 2 float Variablen haben und die Funktion selbst float ist

int main () { // Laden der Hauptfunktion
	float zahl1; // Eingabe Zahl1
	float zahl2; // Eingabe Zahl2
	char wh; // Wahrheitsabgleich
	char zeichen; // Rechenzeichen
	float buffer; // Puffer
	
	cout << "Geben Sie die erste Zahl ein!" << endl;
	cin >> zahl1;
	
	cout << "Geben Sie die zweite Zahl ein!" << endl;
	cin >> zahl2;
	
	cout << "Welchen Rechenvorgang möchten Sie? Bitte wählen Sie aus: + - * /" << endl;
	cin >> zeichen;

	switch (zeichen) {
		case '*':
			buffer = mal(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
			
		case '+':
			buffer = addition(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
		
			case '-':
			buffer = subtraktion(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
			
		case '/':
			buffer = geteilt(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
	}
	
do {
	cout << "Wollen Sie weiter rechnen? Geben Sie bitte J ein, wenn nicht dann N!" << endl;
	cin >> wh;
	
	if (wh=='J') {

	char abgleich;
	cout << "Mit dem vorherigen Eregebnis weiterrechnen? Wenn Ja dann J wenn nein dann N" << endl;
	cin >> abgleich;
	if (abgleich==('J')) {
		
		zahl1 = buffer;
		
		cout << "Geben Sie die zweite Zahl ein!" << endl;
		cin >> zahl2;
		
		cout << "Welchen Rechenvorgang möchten Sie? Bitte wählen Sie aus: + - * /" << endl;
	cin >> zeichen;

	switch (zeichen) {
		case '*':
			buffer = mal(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
			
		case '+':
			buffer = addition(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
		
			case '-':
			buffer = subtraktion(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
			
		case '/':
			buffer = geteilt(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
	}
		
		
	}
	
	else {
			cout << "Geben Sie die erste Zahl ein!" << endl;
	cin >> zahl1;
	
	cout << "Geben Sie die zweite Zahl ein!" << endl;
	cin >> zahl2;
	
	cout << "Welchen Rechenvorgang möchten Sie? Bitte wählen Sie aus: + - * /" << endl;
	cin >> zeichen;

	switch (zeichen) {
		case '*':
			buffer = mal(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
			
		case '+':
			buffer = addition(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
		
			case '-':
			buffer = subtraktion(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
			
		case '/':
			buffer = geteilt(zahl1, zahl2);
			cout << "Das Ergebnis lautet: " << buffer << endl;
			break;
	} 
	}
}
else {
}
}
while(wh=='J'); // Die Do-Schleife wird so lange weiterverwendet, bis wh = N, warum ich oben aber noch einmal if-else dafür brauche ich mir unklar lol
	
} // Ende Mainfunktion

float addition(float zahl1, float zahl2) { // Funktion für die Addition
	float rechnung; // Variable für Rechnung zum return
	rechnung=(zahl1+zahl2); // Berechnung
	return rechnung; // Return
} // Ende der Additionsfunktion

float subtraktion(float zahl1, float zahl2) { // Funktion für die Subtraktion 
	float rechnung; // Variable für die Rechnung zum return
	rechnung=(zahl1-zahl2); // Berechnung
	return rechnung; // Return
} // Ende der Subtraktionsfunktion

float geteilt(float zahl1, float zahl2) { // Funktion für die Division
	float rechnung; // Variable für die Rechnung zum return
	if (zahl1==0 || zahl2==0) { // Abgleich ob man durch Null teilt mit IF
		cout << "Man kann nicht durch Null teilen!" << endl; // Ausgabe an die Person
	} // Ende der If-Anweisung
	else { // Beginn der Else-Anweisung
	rechnung=(zahl1/zahl2); // Berechnung
	return rechnung; // Return
	} // Ende der Else-Anweisung
} // Ende der Divisionsfunktion

float mal(float zahl1, float zahl2) { // Funktion für Multiplikation
	float rechnung; // Variable für die Rechnung zum return
	rechnung=(zahl1*zahl2); // Berechnung
	return rechnung; // Return
} // Ende der Multiplikationsfunktion


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

using namespace std; // Standard Namesraum verwenden

float addition (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "addition" mit 2 float Variablen haben und die Funktion selbst float ist
float subtraktion (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "subtraktion" mit 2 float Variablen haben und die Funktion selbst float ist
float mal (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "mal" mit 2 float Variablen haben und die Funktion selbst float ist
float geteilt (float, float); // Wir teilen dem Compiler von Anfang an mit, das wir eine Funktion "geteilt" mit 2 float Variablen haben und die Funktion selbst float ist

int main () { // Laden der Hauptfunktion
	float zahl1; // Eingabe Zahl1
	float zahl2; // Eingabe Zahl2
	char wh; // Wahrheitsabgleich
	char zeichen; // Rechenzeichenabfrage
	float buffer; // Puffer
	
	cout << "Geben Sie die erste Zahl ein!" << endl; // Abfrage der ersten Zahl
	cin >> zahl1; // Einlesen der ersten Zahl in die Variable zahl1
	
	cout << "Geben Sie die zweite Zahl ein!" << endl; // Abfrage der zweiten Zahl
	cin >> zahl2; // Einlesen der zweiten Zahl in die Variable zahl2
	
	cout << "Welchen Rechenvorgang möchten Sie? Bitte wählen Sie aus: + - * /" << endl; // Abfrage welche Art der Rechnung man betreiben möchte
	cin >> zeichen; // Einlesen des "Rechenzeichens" in die Variable zeichen

	switch (zeichen) { // Switch Case Abfrage bzgl. der Rechenzeichen 
		case '*': // Multiplikation
			buffer = mal(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
			cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
			break; // Break :^)
			
		case '+': // Addition 
			buffer = addition(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
			cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
			break; // Break :^)
		
		case '-': // Subtraktion
			buffer = subtraktion(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
			cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
			break; // Break :^)
			
		case '/': // Division
			buffer = geteilt(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
			cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
			break; // Break :^)
	} // Ende Switch/Case
	
	/* Bei jedem case, wir die jeweilige Funktion aufgerufen, welche zu den Verglichenen Rechenzeichen passt,
	exception handling für die Division durch 0 sind in der Funktion aufgebaut */
	
do { // Beginn der do-Schleife
	cout << "Wollen Sie weiter rechnen? Geben Sie bitte J ein, wenn nicht dann N!" << endl; // Wir fragen den Benutzer ab, ob er überhaupt weiterrechnen will
	cin >> wh; // Benutzer gibt entweder J oder N ein, welches in die Variable wh eingelesen wird.
	
		if (wh=='J') { // Keine Ahnung warum ich hier noch einmal if brauche, aber gut, funktioniert dann halt

			char abgleich; // Behelfsmäßige Variable abgleich, um abzufragen ob man mit dem vorherigen Ergebnis weiterrechnen will oder komplett neu starten will
			
			cout << "Mit dem vorherigen Eregebnis weiterrechnen? Wenn Ja dann J wenn nein dann N" << endl; // Benutzer Fragen ob dieser mit dem vorherigen Ergebnis weiterrechnen will
			
			cin >> abgleich; // Benutzereingabe für den Abgleich mit der Variable abgleich

				if (abgleich==('J')) { // Wenn J, also der Benutzer weiterrechnen will dann gehts mit diesem IF weiter
					zahl1 = buffer; // Wir setzen die Variable zahl1 auf den letzten buffer, ist natürlich bei minus und geteilt schlecht, weil man hier nicht weiß wie man weiterrechnen soll
					cout << "Geben Sie die zweite Zahl ein!" << endl; // Abfrage der zweiten Zahl 
					cin >> zahl2; // Einlesen der zweiten Zahl in die Variable zahl2
		
					cout << "Welchen Rechenvorgang möchten Sie? Bitte wählen Sie aus: + - * /" << endl; // Abfrage welche Art der Rechnung man betreiben möchte 
					cin >> zeichen; // Einlesen des "Rechenzeichens" in die Variable zeichen// Einlesen des "Rechenzeichens" in die Variable zeichen

						switch (zeichen) { // Switch Case Abfrage bzgl. der Rechenzeichen 
							case '*': // Multiplikation
									buffer = mal(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
			
							case '+': // Addition 
									buffer = addition(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
		
							case '-': // Subtraktion
									buffer = subtraktion(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
			
							case '/': // Division
									buffer = geteilt(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
						} // Ende Switch/Case
			} // Ende der if Anweisung (Rechnen mit Vorherigem Ergebnis
	
			else { // Anfang Else, also wenn wir von frisch starten
			
				cout << "Geben Sie die erste Zahl ein!" << endl; // Abfrage der ersten Zahl
				cin >> zahl1; // Einlesen der ersten Zahl in die Variable zahl1
	
				cout << "Geben Sie die zweite Zahl ein!" << endl; // Abfrage der zweiten Zahl
				cin >> zahl2; // Einlesen der zweiten Zahl in die Variable zahl2
	
				cout << "Welchen Rechenvorgang möchten Sie? Bitte wählen Sie aus: + - * /" << endl; // Abfrage welche Art der Rechnung man betreiben möchte
				cin >> zeichen; // Einlesen des "Rechenzeichens" in die Variable zeichen

						switch (zeichen) { // Switch Case Abfrage bzgl. der Rechenzeichen 
							case '*': // Multiplikation
									buffer = mal(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
			
							case '+': // Addition 
									buffer = addition(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
		
							case '-': // Subtraktion
									buffer = subtraktion(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
			
							case '/': // Division
									buffer = geteilt(zahl1, zahl2); // Rechnung in die Variable buffer schreiben
									cout << "Das Ergebnis lautet: " << buffer << endl; // Ausgabe buffer
									break; // Break :^)
						} // Ende Switch/Case
			
			} // Ende der "frisch" rechnen else
		} // Schließen der if Abfrage, ob weitergerechnet werden soll
	} // Schließen der Do-Schleife
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


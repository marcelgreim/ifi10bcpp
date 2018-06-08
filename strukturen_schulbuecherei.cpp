#include <iostream> // Bibliothek für Ein- und Ausgabe
#include <iomanip> // Bibliothek für Ausgabemanipulation
#include <string> // Bibliothek um Strings verwenden zu können SIEHE ISBN, da dort CHAR/INT und Zeichen aufeinander treffen
#include <windows.h> // Bibliothe für system("");

using namespace std; // Wir verwenden den Standardsnamenraum

int position = 0; // Wir brauchen einen Positionszähler

int menue(); // Funktion für das Menue
int eingabe(); // Funktion für die Eingabe von Büchern
int ausgabe(); // Funktion für die Ausgabe von ??
int ausgabealle(); // Funktion für die Komplettausgabe
int ausleihen(); // Funktion zum Ausleihen
int rueckgabe(); // Funktion für die Rückgabe von Büchern
int auswertung(); // Funktion für die Auswertung


//Struktur deklarieren fuer die buecherei
struct buecherei { // Unser neuer Datentyp
	char nname[20]; // Nachname der Person welche ausleiht
	char vname[20]; // Vorname der Person welche ausleiht
	char bucht[20]; // Name des Buchtitels
	char authorvor[20]; // Vorname Author
	char authornn[20]; // Nachname Author
	string isbn; // ISBN als String weil dort CHAR, INT und Zeichen verwendet werden
	int dt; // Datum Tag
	int dm; // Datum Monat
	int dj; // Datum Jahr
	int tel; // Telefonnummer des Ausleihenden
	};

struct buecherei datenbank[1000]; // Wir brauchen ein Array in welcher wir die Datensätze schreiben, das struct bring nur die "Eigenschaften" für das Array mit

int main () { // Hier nur Funktionsausrufe
	menue(); // Funktion Menue wird aufgerufen
}

int menue() {

	int auswahl = 0;
	int alle = 0;
	do{
	system("cls");
	cout << "Bitte auswaehlen!" << endl;
	cout << endl;
	cout << "1. Eingabe Buchdaten" << endl;
	cout << "2. Ausgabe Buchdaten" << endl;
	cout << "3. Ausleihen" << endl;
	cout << "4. Rueckgabe" << endl;
	cout << "5. Auswertung" << endl;
	cout << "99. Beenden des Programmes" << endl;
	
	
	cin >> auswahl;
	switch(auswahl) {
		case(1):{
			eingabe();
			break;
		}
		case(2):{
			ausgabe();
			break;
		}
		case(3):{
			ausleihen();
			break;
		}
		case(4):{
			rueckgabe();
			break;
		}
		case(5):{
			auswertung();
			break;
		}
		case(99):{
			system("exit");
			break;
		}
		default:{
			cout << "Falsche Auswahl! Bitte erneut auswaehlen" << endl;
			Sleep(5000);
			break;
		}
	}
}
while(auswahl!=99 || auswahl==0);
}

int eingabe() {
	cout << "Hier werden die Buecherdaten eingelesen" << endl;
	cout << "Bitte Buchtitel eingeben!" << endl;
	cin >> datenbank[position].bucht;
	cout << "Bitte Vornamen des Authors eingeben!" << endl;
	cin >> datenbank[position].authorvor; 
	cout << endl;
	cout << "Bitte Nachnmane des Authors eingeben!" << endl;
	cin >> datenbank[position].authornn;
	cout << endl;
	cout << "Bitte die ISBN eingeben!" << endl;
	cin >> datenbank[position].nname;
	cout << endl;
	datenbank[position].dj =1111;
	datenbank[position].dm = 11;
	datenbank[position].dt = 11;
	datenbank[position].nname == "Test";
	datenbank[position].vname == "Test";
	datenbank[position].tel = 23948234;
	position++;
	
}

int ausgabe() {
	
}

int ausleihen() {

}

int rueckgabe() {
	
}

int auswertug() {
	cout << "Test";
}

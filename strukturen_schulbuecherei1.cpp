#include <iostream> // Bibliothek f�r Ein- und Ausgabe
#include <iomanip> // Bibliothek f�r Ausgabemanipulation
#include <string> // Bibliothek um Strings verwenden zu k�nnen SIEHE ISBN, da dort CHAR/INT und Zeichen aufeinander treffen
#include <windows.h> // Bibliothe f�r system("");
#include <cstdio> // F�r das Zuk�nftige wegspeichern ben�tigt (siehe fopen/fwrite)

using namespace std; // Wir verwenden den Standardsnamenraum

int position = 1; // Wir brauchen einen Positionsz�hler

int menue(); // Funktion f�r das Menue
int eingabe(); // Funktion f�r die Eingabe von B�chern
int ausgabe(); // Funktion f�r die Ausgabe von ??
int ausgabealle(); // Funktion f�r die Komplettausgabe
int ausleihen(); // Funktion zum Ausleihen
int rueckgabe(); // Funktion f�r die R�ckgabe von B�chern
int auswertung(); // Funktion f�r die Auswertung
int wegspeichern(); // Zuk�nftige Funktion zum Wegspeichern (fopen/fwrite, etc)

//Struktur deklarieren fuer die buecherei
struct buecherei { // Unser neuer Datentyp
	char nname[20]; // Nachname der Person welche ausleiht
	char vname[20]; // Vorname der Person welche ausleiht
	char bucht[20]; // Name des Buchtitels
	char authorvor[20]; // Vorname Author
	char authornn[20]; // Nachname Author
	string isbn; // ISBN als String weil dort CHAR, INT und Zeichen verwendet werden
	int bchnr; // Buchnummer = Arrayzahl, wichtig fuer ausgabe!
	int dt; // Datum Tag
	int dm; // Datum Monat
	int dj; // Datum Jahr
	int tel; // Telefonnummer des Ausleihenden
	int letzterueck; // Wurde das Buch zur�ckgegeben und wenn ja wann?
	int dtr; // Rueckgabe Tag
	int dmr; // Rueckgabe Monat
	int djr; // Rueckgabe Jahr
	};

struct buecherei datenbank[1000]; // Wir brauchen ein Array in welcher wir die Datens�tze schreiben, das struct bring nur die "Eigenschaften" f�r das Array mit

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
				cout << "Moechten Sie alle Buecher oder nur ein einziges Buch ausgeben? F�r alle B�cher 1 und f�r ein einziges Buch 2 eingeben" << endl;
				cin >> alle;
					if(alle==1) {
						ausgabealle();
					}
					else{
						ausgabe();
					}
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
	int abbruch; // Ben�tigt f�r do-while Schleifen, als Abbruch bedingung
	
	do {
	cout << "Hier werden die Buecherdaten eingelesen" << endl;
	cout << "Bitte Buchtitel eingeben!" << endl;
	cin >> datenbank[position].bucht;
	cout << "Bitte Vornamen des Authors eingeben!" << endl;
	cin >> datenbank[position].authorvor; 
	cout << "Bitte Nachname des Authors eingeben!" << endl;
	cin >> datenbank[position].authornn;
	cout << "Bitte die ISBN eingeben!" << endl;
	cin >> datenbank[position].nname;
	datenbank[position].dj =1111;
	datenbank[position].dm = 11;
	datenbank[position].dt = 11;
	datenbank[position].nname == "Test";
	datenbank[position].vname == "Test";
	datenbank[position].tel = 23948234;
	cout << "Buch wurde an Stelle: " << position << " gespeichert!" << endl;
	datenbank[position].bchnr == position;
	position++; // Erh�hen des Z�hlers, welcher global gespeichert wird
	cout << "M�chten Sie noch ein Buch eingeben? Bitte 1 f�r Ja oder 2 f�r Nein!" << endl;
	cin >> abbruch;
	}
	while(abbruch==1);
	
}

int ausgabe() {
	int temp; // Tempvariable f�r das Auslesen;
	int abfrage; // Tempvariable f�r Abbruchbedingungen
	do {
	cout << "Geben Sie bitte die Buchnummer ein, ueber welche Sie Informationen ben�tigen. Hinweis: Sie k�nnen alle B�cher erst einmal ausgeben lassen und damit die Nummer herausfinden! Dies geht �ber B�cher auslesen und dann alle Ausw�hlen!" << endl;
	cin >> temp;
	cout << "Buchnummer: " << datenbank[temp].bchnr << endl;
	cout << "Buchtitel: " << datenbank[temp].bucht << endl;
	cout << "Vorname des Authors: " << datenbank[temp].authorvor << endl;
	cout << "Nachname des Authors: " << datenbank[temp].authornn << endl;
	cout << "ISBN: " << datenbank[temp].isbn << endl;
	cout << "Ausgeliehen von: " << datenbank[temp].vname << " " << datenbank[temp].nname << " Telefon: " << datenbank[temp].tel << " " << "Am " << datenbank[temp].dt << "." << datenbank[temp].dm << "." << datenbank[temp].dj << endl << endl;
	cout << "Wollen Sie noch ein Buch abfragen? Bitte 1 eingeben oder 2 f�r Abbruch" << endl;
	cin >> abfrage;
	}
	while(abfrage==1);
}

int ausleihen() {
	int temp; // Tempvariable f�r das Auslesen
	int abfrage; // Tempvariable f�r Abbruchbedngungen
	int abfrageif; // Tempvariable f�r Abbruchbedingungen in der ifschleife
	do {
	cout << "Welches Buch soll ausgeliehen werden? Bitte Nummer eingeben!" << endl;
	cin >> temp;
	cout << "F�r dieses Buch ist folgender Eintrag bereits enthalten!" << endl;
	cout << "Vorname: " << datenbank[temp].vname << " " << "Nachname: " << datenbank[temp].nname << " " << "Telefonnummer: " << datenbank[temp].tel << " " << "Am " << datenbank[temp].dt << "." << datenbank[temp].dm << "." << datenbank[temp].dj << endl << endl;
	cout << "Diesen Eintrag bearbeiten? 1 f�r Ja und 2 f�r Nein" << endl;
	cin >> abfrageif;
		if(abfrageif==1) {
			cout << "Bitte Vorname des Ausleihers eingeben!" << endl;
			cin >> datenbank[temp].vname;
			cout << "Bitte Nachname des Ausleihers eingeben!" << endl;
			cin >> datenbank[temp].nname;
			cout << "Bitte Telefonnummer des Ausleihers eingeben!" << endl;
			cin >> datenbank[temp].tel;
			cout << "Bitte aktuelles Datum eingeben!" << endl;
			cout << "Jetzt bitte Tag im Format XX eingeben!" << endl;
			cin >> datenbank[temp].dt;
			cout << "Jetzt bitte Monat im Format XX eingeben!" << endl;
			cin >> datenbank[temp].dm;
			cout << "Jetzt bitte Jahr im Format XXXX eingeben!" << endl;
			cin >> datenbank[temp].dj;
			cout << "Daten erfolgreich gespeichert! Hier noch einmal die eingegeben Daten!" << endl;
			cout << "Vorname: " << datenbank[temp].vname << " " << "Nachname: " << datenbank[temp].nname << " " << "Telefonnummer: " << datenbank[temp].tel << " " << "Am " << datenbank[temp].dt << "." << datenbank[temp].dm << "." << datenbank[temp].dj << endl << endl;
			cout << "Wollen Sie noch eine Ausleihe hinzuf�gen? Bitte 1 f�r Ja oder 2 F�r Nein!" << endl;
			cin >> abfrage;
			}
			else {
				cout << "R�ckkehr zum Hauptprogramm" << endl;
			}
	}
	while(abfrage==1);
} // Ende des ausleihen Funktion

int rueckgabe() {
	
	cout << "Welches Buch soll zur�ck gegeben werden? Bitte Nummer eingeben" << endl;
	cin >> temp;
	
}

int auswertung() {
	cout << "Test" << endl;
}

int ausgabealle() { // Funktion um alles Auszugeben
	for(int i=0; i < position; i++){
	cout << "Buchnummer: " << datenbank[i].bchnr << endl;
	cout << "Buchtitel: " << datenbank[i].bucht << endl;
	cout << "Vorname des Authors: " << datenbank[i].authorvor << endl;
	cout << "Nachname des Authors: " << datenbank[i].authornn << endl;
	cout << "ISBN: " << datenbank[i].isbn << endl;
	cout << "Ausgeliehen von: " << datenbank[i].vname << " " << datenbank[i].nname << " Telefon: " << datenbank[i].tel << " " << "Am " << datenbank[i].dt << "." << datenbank[i].dm << "." << datenbank[i].dj << endl << endl;
	cout << endl;
	cout << endl; 
	}
}

int wegseichern() {
	cout << "Zukunft" << endl;
}


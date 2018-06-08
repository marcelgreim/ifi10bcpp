#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

int zaehler = 1;

int eingabe();
int ausgabe();
int ausgabealle();

//Struktur deklarieren
struct schuelerdaten {
	char nname[20];
	char vname[20];
	int tel;
	};
	
//Struktur definieren

struct schuelerdaten ifi10b[25];

int main () {
	int auswahl = 0;
	int alle = 0;
	do{
	system("cls");
	cout << "Bitte auswaehlen!" << endl;
	cout << endl;
	cout << "1. Eingabe der Daten" << endl;
	cout << "2. Ausgabe der Daten" << endl;
	cout << "99. Beenden des Programmes" << endl;
	
	
	cin >> auswahl;
	switch(auswahl) {
		case(1):{
			cout << "Eingabe" << endl;
			eingabe();
			break;
		}
		case(2):{
			cout << "Wollen Sie alle Schueler ausgeben lassen? Drücken Sie dazu bitte die 1 ansonsten 2 um Normal fortzufahren" << endl;
			cin >> alle;
				if(alle==1) {
						ausgabealle();
				}
				else {
					ausgabe();
				}
			break;
		}
		case(99):{
			system("exit");
			break;
		}
		default:{
			cout << "Falsche Auswahl!" << endl;
			Sleep(5000);
			break;
		}
	}
}
while(auswahl!=99 || auswahl==0);
}

int eingabe(){
	int abbruch;
	do {
	cout << "Bitte Vornamen eingeben" << endl;
	cin >> ifi10b[zaehler].vname;
	cout << "Bitte Nachname eingeben" << endl;
	cin >> ifi10b[zaehler].nname;
	cout << "Bitte Telefonnummer eingeben" << endl;
	cin >> ifi10b[zaehler].tel;
	cout << "Die war Schueler Nr. " << zaehler << endl;
	zaehler++;
	cout << "Wollen Sie noch einen Schüler eintragen? 1 für Ja 2 für Nein" << endl;
	cin >> abbruch;
	}
	while(abbruch==1);
	return 0;
}
int ausgabe(){
	int eingabe;
	int abbruch;
	do {
	cout << "Bitte Stelle des Schülers eingeben!" << endl;
	cin >> eingabe;
	cout << "Vorname: " << ifi10b[eingabe].vname << endl;
	cout << "Nachname: " << ifi10b[eingabe].nname << endl;
	cout << "Telefon: " << ifi10b[eingabe].tel << endl;
	cout << endl;
	cout << "Noch einen Schüler ausgeben? 1 für Ja 2 für Nein" << endl,
	cin >> abbruch;
	}
	while(abbruch==1);
	return 0;
	
	
}

int ausgabealle() {
	for(int count = 0; count < zaehler; count++) {
		cout << "Vorname: " << ifi10b[count].vname << endl;
		cout << "Nachname: " << ifi10b[count].nname << endl;
		cout << "Telefon: " << ifi10b[count].tel << endl;
		cout << endl;
		cout << endl;
	}
}

#include <iostream> // Laden der Input/Output Bibliothek
#include <iomanip> // Laden der Bibliothek für die Konsolenmanipulation
#include <windows.h> // Laden der Windows-Auführbibliothek

// system("CLS");
// Sleep(100);

using namespace std;

int lauflicht [35] = {0}; // Wir erstellen ein Array als Global und sagen diesem das wir 35 Einträge haben. Setzen diese aber vorerst alle auf 0

int schieben ();
int ausgabe();

int main () { // Begin der Mainfunktion
	lauflicht [1] = 1; // Setzen Position 1 auf 1
	lauflicht [6] = 1; // Setzen Position 6 auf 1
	lauflicht [8] = 1; // Setzen Position 8 auf 1
	
	while (true) // Endloselaufenlassen ok lol
	{
	system("cls");
	ausgabe();
	schieben();
	Sleep(100);
	}
}


int schieben () {
	int temp; // Initilisieren der Variable für das Zwischenspeichern der ersten Position mit Vorbelegung 0
	temp = lauflicht [0]; // Wir setzen den Wert temp auf die "erste" Position des Arrays
	int i; // Initialisieren der Zählervariable mit Vorbelegung 0
	
	for (i=0; i <= 33; i++) { // Beginn der For-Schleife
		lauflicht[i] = lauflicht [i+1];
		} // Ende der For-Schleife
	
	lauflicht [34] = temp;
	
}

int ausgabe () {
	int i;
	for (i=0; i<=34; i++) {
			cout << lauflicht[i];
	} 
}

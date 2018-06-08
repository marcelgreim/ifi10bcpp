#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <cstdlib> // CSTDLIB Laden für random Funktionen
#include <ctime> // Laden der Bibliothek für Uhrzeitfunktionen


using namespace std; // Wir verwenden den Standardnamensraum

// Hier kommen alle Funktionen und globale Variablen, welche für den Randomzahlengenerator wichtig sind
int startzufall(); // Zufall setzen
int zufall (); // Wir sagen dem Compiler, das wir eine Funktion mit dem Namen "zufall" später definieren
int minrand = 1; // Globale Variable für Minimumrandom, ist zwar nicht gut, aber OK für dieses Experiment
int maxrand = 49; // Globale Variable für Maximumrandom, ist zwar nicht gut, aber OK für dieses Experiment
// ENDE: Funktionen und Variablen für den Randomzahlengenerator

// Hier kommen alle Funktionen und globale Variablen hin, welche für die Fuellung des Arrays und die Sortierung wichtig sind
int fuellung (int *p_int);


int main () { // Start der Mainfunktion

    startzufall(); // Aufruf der Funktion, welche für die Zufallsparameter wichtig ist.
    int lotto [6] = {1,2,3,4,5,6}; // Array kommt diesmal in die Mainfunktion und wird mit 0 an allen Stellen initialisiert.
    fuellung(lotto);
    cout << lotto [1];
    cout << lotto [2];
    cout << lotto [3];
    cout << lotto [4];
    cout << lotto [5];

}

int startzufall () { // Funktion welche für die Zufallsparameter wichtig ist, diese setzt alle nötigen Infos welche rand braucht, wird nur einmal aufgerufen in der Main
	time_t zeit; // Variable zeit mit Datentyp time_t initialisieren
	zeit=time(0); // Variable zeit auf aktuelle Zeit setzen
	srand (zeit); // srand mit "zeit" füttern
}

int zufall () { // Funktion für Zufallszahlenausgabe
	int randomzahl; // Wir initialisieren hier den Integer "Randomzahl"
	randomzahl=rand()%(maxrand-minrand+1)+minrand; // Formel für "Zufallszahlenberechnung"
	return randomzahl; // Wir geben den Integer "randomzahl" zurück
} // Ende Funktion für Zufallszahlenausgabe

/* Test
int fuellung (int *p_int) {
    int temp=*p_int;
    cout << temp;
     // int temp = *(p_int+1); // Wäre der zweite Platz im Array


}
*/

int fuellung (int *p_int) { // Array Auffuellen
    int temp=*p_int;
    int temp2=*p_int;
	for (int counter = 5; counter >= 0; counter--) { // Start For-Schleife für die Befüllung
		temp = zufall(); // Auffüllung mit Werten von der Funktion "Zufall"
		temp = *(p_int+1);
		for (int k=0; k<counter;k++) {
            temp2= + *(p_int+1);
			if (temp2==temp) {

			counter--;
			temp=counter;

		}

		else {
            temp = temp + *(p_int+1);
			temp = zufall();
		}

		}
	} // Ende For-schleife
} // Ende Funktion "fuellung"



#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <cstdlib> // CSTDLIB Laden für random Funktionen
#include <ctime> // Laden der Bibliothek für Uhrzeitfunktionen


using namespace std; // Wir verwenden den Standardnamensraum

int zufall (); // Wir sagen dem Compiler, das wir eine Funktion mit dem Namen "zufall" später definieren
int startzufall(); // Zufall setzen
int fuellung (); // Wir brauchen hier keine Übergabeparameter, warum auch?
int ausgabeeins (); // Ausgabe Auslagern
void bubblesort(); // Bubblesort
int ausgabezwei(); // Ausgabe Zwei
int eingabeeins(); // Eingabe Eins
int abgleich(); // Abgleich
int ausgabedrei(); // Ausgabe Drei
int zusatzzahl(); // Zusatzzahl

int filler [5] = {0}; // Das Array "filler" wird Global angelegt und wird komplett mit Nulen beschrieben

int eingabe [5] = {0}; // Array für die Eingabe der Benutzerzahlen

int minrand = 1; // Globale Variable für Minimumrandom, ist zwar nicht gut, aber OK für dieses Experiment
int maxrand = 49; // Globale Variable für Maximumrandom, ist zwar nicht gut, aber OK für dieses Experiment
int countzahl = 0;

int main () { // Start der Mainfunktion

	startzufall(); // Zufall starten
	fuellung(); // Aufrufen der Fuellfunktion
	ausgabeeins(); // Ausgabe	
	bubblesort(); // Bubblesort
	ausgabezwei(); // Ausgabe Zwei
	eingabeeins(); // Benutzereingabe in das Array einlesen
	abgleich(); // Abgleich der Anzahl
	ausgabedrei(); // Ausgabe drei
	
} // Ende der Mainfunktion

int startzufall () {
	time_t zeit; // Variable zeit mit Datentyp time_t initialisieren
	zeit=time(0); // Variable zeit auf aktuelle Zeit setzen
	srand (zeit); // srand mit "zeit" füttern	
}

int zufall () { // Funktion für Zufallszahlenausgabe
	int randomzahl; // Wir initialisieren hier den Integer "Randomzahl"
	randomzahl=rand()%(maxrand-minrand+1)+minrand; // Formel für "Zufallszahlenberechnung"
	return randomzahl; // Wir geben den Integer "randomzahl" zurück
} // Ende Funktion für Zufallszahlenausgabe

int fuellung () { // Array Auffuellen
	for (int counter = 5; counter >= 0; counter--) { // Start For-Schleife für die Befüllung
		filler [counter] = zufall(); // Auffüllung mit Werten von der Funktion "Zufall"
		for (int k=0; k<counter;k++) {
			
			if (filler[k]==filler[counter]) {
			
			counter--;
			k=counter;
			
		}
		
		else {
			filler [k] = zufall();
		}
		
		}
	} // Ende For-schleife		
} // Ende Funktion "fuellung"

int ausgabeeins () { // Array Ausgabe
	for (int counter = 5; counter >= 0; counter--) {
		cout << filler [counter] << endl;
	}
	cout << "Dies war Erweiterung 1" << endl;
}


void bubblesort() {
	int temp;
	for (int j=0;j<5;j++) {

					
			for (int i=0;i<5-j;i++) { // Ein Durchlauf
				
			if(filler[i]>filler[i+1]){ // Ein Vergleich
			
				temp=filler[i];
				filler[i]=filler[i+1];
				filler[i+1]=temp;
			}
		}
	}
}

int ausgabezwei () { // Array Ausgabe
	for (int counter = 5; counter >= 0; counter--) {
		cout << filler [counter] << endl;
	}
	cout << "Die Zusatzzahl lautet: " << zusatzzahl() << endl;
	cout << "Dies war Erweiterung 2" << endl;
}	

int eingabeeins () {
	int j=1;
	for (int i=0; i<6; i++) {
		cout << "Bitte geben Sie die " << j << " Zahl ein" << endl;
		cin >> eingabe[i];
		j++;
	} 
	/*cout << "Bitte erste Zahl eingeben." << endl;
	cin >> eingabe[0];
	cout << "Bitte zweite Zahl eingeben." << endl;
	cin >> eingabe[1];
	cout << "Bitte dritte Zahl eingeben." << endl;
	cin >> eingabe[2];
	cout << "Bitte vierte Zahl eingeben." << endl;
	cin >> eingabe[3];
	cout << "Bitte fünfte Zahl eingeben." << endl;
	cin >> eingabe[4];
	cout << "Bitte sechste Zahl eingeben." << endl;
	cin >> eingabe[5]; */
}

int abgleich () {
	for (int i=0; i<5; i++) {
		if (eingabe[i] == filler[0] || eingabe[i] == filler[1] || eingabe[i] == filler[2] || eingabe[i] == filler [3] || eingabe[i] == filler[4] || eingabe[i] == filler [5]) {
		countzahl++;	
	}
	else {
	}
}
}
int ausgabedrei () {
	cout << endl; // Verschönerung
	cout << "Sie haben: " << countzahl << " richtig!" << endl;
}

int zusatzzahl () {
	int random = zufall();
	for (int k=5; k>=0;k--) {
			
			if (random==filler[k]) {
				
			random = zufall();
			
		}
	
}
	return random;
}

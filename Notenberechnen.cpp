#include <iostream> // Laden der Ein- und Ausgabebibliothek
#include <cstdlib> // CSTDLIB Laden für random Funktionen
#include <ctime> // Laden der Bibliothek für Uhrzeitfunktionen


using namespace std; // Wir verwenden den Standardnamensraum

float noten [3][6] = {{0}, {0}, {0}}; // Definieren und Initialisieren des Multidimensionalen Arrays

int eingabe(); // Zahle in Mutidimensionales Array laden, passiert in dieser Funktion
int durchschnitt(); // Ausrechnen des Durchschnittes (mit Abrunden)
int endnote(); // Endnote als Ganze Zahl
int kaufrunden(); // Kaufmännisch gerundet
int ausgabe(); // Ausgabe der Noten

int main () { // Start der Mainfunktion, diese soll nur aus Funktionsaufrufen bestehen
	eingabe(); // Aufruf der Funktion Eingabe
	ausgabe(); // Aufruf der Funktion ausgabe
	durchschnitt();
	endnote();
	kaufrunden();
}

int eingabe () {
	int schuelerzahler = 1; // Hochzählen der Schüleranzahl innerhalb der For-Schleife
	for (int i=1; i<=3;) {
		cout << "Bitte Noten fuer Schueler " << schuelerzahler << " eingeben!" << endl;

			
				cout << "Bitte die Note der ersten Schulaufgabe im Fach Software eingeben" << endl;
				cin >> noten [schuelerzahler-1][0];
				cout << "Bitte die Note der zweiten Schulaufgabe im Fach Software eingeben" << endl;
				cin >> noten [schuelerzahler-1][1];
				cout << "Bitte die Note der ersten Stegreifaugabe im Fach Software eingeben" << endl;
				cin >> noten [schuelerzahler-1][2];
				cout << "Bitte die Note der zweiten Stegreifaufgabe im Fach Software eingeben" << endl;
				cin >> noten [schuelerzahler-1][3];
				cout << "Bitte die Note der dritten Stegreifaufgabe im Fach Software eingeben" << endl;
				cin >> noten [schuelerzahler-1][4];
				cout << "Bitte muendliche Noten im Fach Software eingeben" << endl;
				cin >> noten [schuelerzahler-1][5];	
				schuelerzahler++; // Hochzählen der Schülernzahl
				i++; // Hochsetzen des Counters um die beknackte Schleife zu beenden			
		
	} 

}

int ausgabe () {
	int iz, is; //Initialisierung der Zähler für Zeilen und Spalten 
	
		for (iz=0; iz<3; iz++) {
			for (is=0; is<6; is++) {
					cout << noten[iz][is] << " ";
			}
		cout << endl;
		}
		cout << endl;
}
		
int durchschnitt () {
	float temp;
	int schuelerzahl = 1; // Hochzählen der Schüleranzahl innerhalb der For-Schleife
	for (int i=1; i<=3;) {
		temp = (((noten[schuelerzahl-1][0]*2)+(noten[schuelerzahl-1][1]*2)+noten[schuelerzahl-1][2]+noten[schuelerzahl-1][3]+noten[schuelerzahl-1][4]+noten[schuelerzahl-1][5])/8);
		cout << "Durchschnitt Schueler " << schuelerzahl <<" betraegt: " << temp << endl;
		schuelerzahl++;
		i++;
}
	cout << endl;
}

int endnote () {
		int temp;
		int temp2 = 0;
		float temp3 = 0;
	int schuelerzahl = 1; // Hochzählen der Schüleranzahl innerhalb der For-Schleife
	for (int i=1; i<=3;) {
		temp = (((noten[schuelerzahl-1][0]*2)+(noten[schuelerzahl-1][1]*2)+noten[schuelerzahl-1][2]+noten[schuelerzahl-1][3]+noten[schuelerzahl-1][4]+noten[schuelerzahl-1][5])/8);
		switch (temp) {
						case(1):{
										cout << "Endnote Schueler " << schuelerzahl <<" betraegt: " << temp << " Also: Sehr Gut" << endl; 
							break;
							}
						case(2):{
										cout << "Endnote Schueler " << schuelerzahl <<" betraegt: " << temp << " Also: Gut" << endl;
							break;
						}
						case(3):{
										cout << "Endnote Schueler " << schuelerzahl <<" betraegt: " << temp << " Also: Befriedigend" << endl;
							break;
						}
						case(4):{
										cout << "Endnote Schueler " << schuelerzahl <<" betraegt: " << temp << " Also: Ausreichend" << endl;
							break;
						}
						case(5):{
										cout << "Endnote Schueler " << schuelerzahl <<" betraegt: " << temp << " Also: Mangelhaft" << endl;
							break;
						}
						case(6):{
										cout << "Endnote Schueler " << schuelerzahl <<" betraegt: " << temp << " Also: Ungenügend" << endl;
							break;
						}
		}
		temp2=temp2+temp;
		schuelerzahl++;
		i++;
}
		cout << endl;
		temp3=temp2/3;		
		cout << "Klassendurchschnitt betraegt: " << temp3;
		cout << endl;
		cout << endl;
	}
	
int kaufrunden() {
			float temp;
		int temp2 = 0;
		float temp3 = 0;
		float temp4 = 0;
	int schuelerzahl = 1; // Hochzählen der Schüleranzahl innerhalb der For-Schleife
	for (int i=1; i<=3;) {
		temp = (((noten[schuelerzahl-1][0]*2)+(noten[schuelerzahl-1][1]*2)+noten[schuelerzahl-1][2]+noten[schuelerzahl-1][3]+noten[schuelerzahl-1][4]+noten[schuelerzahl-1][5])/8);
		temp2 = (((noten[schuelerzahl-1][0]*2)+(noten[schuelerzahl-1][1]*2)+noten[schuelerzahl-1][2]+noten[schuelerzahl-1][3]+noten[schuelerzahl-1][4]+noten[schuelerzahl-1][5])/8);
		temp3 = temp-temp2;
		if(temp3<0.5) {
			temp4=temp2;
		}
		else {
			temp4=temp2+1;
		}
		cout << "Endnote Schueler " << schuelerzahl << " betraegt kaufmaennisch gerundet: " << temp4 << endl;
		i++;
	}
		}
	



#include <iostream>
#include <iomanip> // Für schönere Konsolenausgabe

using namespace std;

int main (void){
	int zahl1; // Einfache Ganzzahlen, deshalb INT
	int zahl2; // Auch hier deshalb INT
	int ergebnis1; // Ausgabe Speichern
	float zahl3; // Keine Angabe welche Daten genau, deshalb FLOAT
	float zahl4; // Auch hier deshalb FLOAT
	float ergebnis2; // Ausgabe 2 Speichern
	int liter; // Liter bei Benzin werden normlerweiße in Ganzzahlen angegeben
	float km_neu; // KM werden teilweiße getrennt eingegeben
	float km_alt; // Siehe oben
	float ergebnis3; // Ausgabe 3 Speichern
	float ergebnis_netto; // Netto eingabe
	float ergebnis_brutto; // Initialisieren des Bruttoergebnis
	float ergebnis_umsatz; // Initialisieren der Umsatzsteuer
	const float UMS=19;
	const float UMS2=119;
	cout << "Aufgabe 1, normales Addieren: " << endl; // Weil Aufgabe 1
	cout << endl; // Schön aussehen
	cout << "Bitte Zahl 1 eingeben!" << endl; // Eingabe Zahl 1 anfordern
	cin >> zahl1; // Einlesen in die Variable zahl1
	cout << "Bitte Zahl 2 eingeben!" << endl; // Eingabe Zahl 2 anfordern
	cin >> zahl2; // Einlesen in die Variable zahl2
	ergebnis1=zahl1+zahl2; // Eregebnis 1 ausrechnen
	cout << "Das Ergebnis ist: " << ergebnis1 << endl; // Ausgabe mit Ergebnis
	cout << "" << endl; // Schön
	cout << endl; // Aufhübschen
	cout << "Aufgabe 2, Eingabe Zweier Zahlen und dividieren" << endl; // Weil Aufgabe 2
	cout << endl; // Schön machen
	cout << "Zahl 1 eingeben!" << endl; // Eingabe Zahl 1 anfordern
	cin >> zahl3; // Einlesen in die Variable zahl3
	cout << "Zahl 2 eingeben!" << endl; // Eingabe Zahl 2 anfordern
	cin >> zahl4; // Einlesen in die Variable zahl3
	ergebnis2=zahl3/zahl4; // Eregebnis 2 ausrechnen
	cout << "Das Ergebnis ist: " << ergebnis2 << endl; // Ausgabe des Ergebnis 
	cout << endl; // Aufhübschen
	cout << endl; // Aufhübschen
	cout << "Aufgabe 3, Spritberechnen" << endl; // Aufgabe 3
	cout << endl; // Endline zum aufhübschen
	cout << "Bitte die getankten Liter eingeben" << endl; // Eingabe Liter getankt
	cin >> liter; // Variable mit Literanzahl füllen
	cout << "Bitte alten Kilometerstand angeben" << endl; // Eingabe alter KM Stand
	cin >> km_alt; // Variable km_alt füllen
	cout << "Bitte neuen Kilometerstand angeben" << endl; // Eingabe neuer KM Stand
	cin >> km_neu; // variable km_neu füllen
	ergebnis3= 100*liter/(km_neu-km_alt); // Berechnung Ergebnis 3
	cout << "Durchschnittliche Verbrauch: " << setprecision(2) << ergebnis3 << endl; // Ausgabe des Durchschnittlichen Verbrauchs -> Setprecision(n) gibt an wieviele Nachkommastellen
	cout << endl; // Aufhübschen
	cout << "Aufgabe 4, Steuer rechnen" << endl;
	cout << endl; // Aufhübschen
	cout << "Eingeben vom Nettobetrag!" << endl;
	cin >> ergebnis_netto;
	ergebnis_brutto=(ergebnis_netto/100)*UMS2;
	cout << "Bruttopreis entspricht: " << setprecision(7) << ergebnis_brutto << endl;
	ergebnis_umsatz=ergebnis_netto/100*UMS;
	cout << "Die Umsatzsteuer entspricht: " << setprecision(7) << ergebnis_umsatz  << ""<< endl;
	cout << endl;
	cout << "Fertig :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) :^) " << endl;
	cout << "Test von Inkrement :^)" << endl;
	int ergebnis22=ergebnis2++;
	cout << ergebnis22;
	return 0;
	
	
	
}

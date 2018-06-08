int pruefung (int pruef, int tag) {
	int rueckgabe; // Rueckgabe an was auch immer
	if (pruef==1) { // Wenn Schaltjahr
		if (tag>0 && tag<=29) {
			rueckgabe=1;
			return rueckgabe;
		}
		else {
			cout << "Ist ein Schaltjahr, kann also nicht 28 seien" << endl;
			rueckgabe=3;
			return rueckgabe;
			
		}
	}
	else {
		if (tag>0 && tag <=28) {
			rueckgabe=0;
			return rueckgabe;
		}
		
		else {
			cout << "Kann nicht seien" << endl;
			rueckgabe=3;
			return rueckgabe;
		}
	}
}

#include <iostream>
#include <iomanip>

using namespace std;

void bubblesort();
void ausgeben();

int lotto[6]={46,34,12,1,28,22};

int main () {
	bubblesort();
	// ausgeben();
	return 0;
}

void ausgeben () {
	for(int i=0; i<=5; i++) {
		cout << lotto[i] << " ";
	}
}

void bubblesort() {
	int temp;
	for (int j=0;j<5;j++) {

					
			for (int i=0;i<5-j;i++) { // Ein Durchlauf
				
			if(lotto[i]>lotto[i+1]){ // Ein Vergleich
			
				temp=lotto[i];
				lotto[i]=lotto[i+1];
				lotto[i+1]=temp;
			}
			
				
		}
			ausgeben();
			cout << endl;
			
		}
}
	}


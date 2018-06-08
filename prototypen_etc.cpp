#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

//Arrays
//int lotto[6];
int tipps[6];

//Prototypen
void tabellefuellen(int *p_int,int laenge);
void ausgabe(int *p_int,int laenge);
void eingabe(int *p_int,int laenge);
void zusatzzahl(int *p_int,int laenge);
void bubblesort(int *p_int,int laenge);


//main
int main()
{
    int lotto[6] = {0} ;
    tabellefuellen(lotto,6);
    bubblesort(lotto,6);
    ausgabe(lotto,6);
    zusatzzahl(lotto,6);
    eingabe(lotto,6);
}


//PROTOTYPEN

//fuellen
void tabellefuellen(int *p_int,int laenge)

{
    int i;
    int min = 1;
    int max = 49;
    int x=0;
    time_t zeit;
    zeit = time(0);
    srand(zeit);

    for (i=0;i<=5;i++)
    {
        x=rand()%(max-min+1)+min;
        *(p_int+i)=x;
        //Vergleich mit vorhergehenden Zahlen
        for(int k=0;k<i;k++)
        {
            if(*(p_int+k)==*(p_int+i))
            {
                i--;
                k=i;
            }
        }
    }
}

//Ausgabe
void ausgabe(int *p_int,int laenge)

{

    int i;

    cout<<"Ihre Zufallszahlen: ";
    for (i=0; i<=5; i++)
    {

        cout<<*(p_int+i)<<" ";

    }
    cout<<endl;
}

//Pruefung

void pruefung(int *p_int,int laenge)

{
    for(int i=0;i<5;i++)
    {
        while(*(p_int+i)==*(p_int+i+1))
        {
            tabellefuellen(p_int,laenge);
        }
    }
}


//Sortierung

void bubblesort(int *p_int,int laenge)
{
    int temp;

    for(int j=0;j<laenge-1;j++)        //für alle Durchläufe
    {
        for(int i=0;i<laenge-1-j;i++)    //ein Durchlauf links -> rechts
        {
            if(*(p_int+i)>*(p_int+i+1))   //ein Vergleich
            {
                temp=*(p_int+i);
                *(p_int+i)=*(p_int+i+1);
                *(p_int+i)=temp;
            }
            //ausgabe();
            //cout<<endl;
        }
    }

}

//Eingabe
void eingabe (int *p_int,int laenge)

{
    int zaehler=0;
    for(int e=0; e<=5; e++)
    {
        cout<<endl<<"Geben Sie ihren "<<e+1<<". Tipp ein:";
        cin>>tipps[e];
    }

    for(int i=0;i<=5;i++)
    {
        for(int z=0;z<=5;z++)
        {
            if(tipps[i]==*(p_int+z))
            {
                cout<<i+1<<". Zahl in den Zufallszahlen enthalten!!"<<endl;
                zaehler=zaehler+1;
            }
        }
    }
    cout<<"Sie haben "<<zaehler<<" richtige"<<endl;
}

//Zusatzzahl
void zusatzzahl(int *p_int,int laenge)

{
    int zusatzzahl;
    int min = 1;
    int max = 49;

    time_t zeit;


    zeit = time(0);
    srand(zeit);
    zusatzzahl=rand()%(max-min+1)+min
    ;

    cout<<"Zusatzzahl: "<<zusatzzahl;

}

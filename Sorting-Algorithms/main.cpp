
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;
const int n=100;
clock_t start, stop;
double czas;

void MergeSort(int tab[], int dolny, int srodkowy, int gorny  )
{
    int m1, m2;

    m1 = srodkowy - dolny + 1;
    m2 = gorny - srodkowy;

    if(gorny>0)
    {

    int L[m1+1];
    int P[m2+1];

    for(int i=0; i<m1 ; i++)
    {
        L[i]=tab[i];
    }

    int j = srodkowy;
    for(int i=0; i<m2 ; i++)
    {
        j++;
        P[i]=tab[j];
    }

    //wartownik
    L[m1]=99999;
    P[m2]=99999;


    MergeSort(L, 0, (m1-1)/2, m1-1 );
    MergeSort(P, 0, (m2-1)/2, m2-1 );

    //sortowanie
    int g=0, h=0;
	for (int k=dolny; k<=gorny; k++)
    {
		if(L[g] <= P[h])
		{
			tab[k] = L[g];
			g++;
		}
		else
		{
			tab[k] = P[h];
			h++;
		}
	}
    }
}

void SelectionSort(int tab[])
{
    int najm=0, inajm=0, schowek=0;

    for(int j=0; j<n; j++)
    {
        najm=tab[j];
        inajm=j;
        for(int i=0+j; i<n ;i++)
        {
            if(tab[i]<najm)
            {
                najm=tab[i];
                inajm=i;
            }
        }

        if( tab[j]!=tab[inajm])
            {
                schowek=tab[j];
                tab[j]=tab[inajm];
                tab[inajm]=schowek;
            }
    }
}

int main()
{
    int tab[n];

    srand (time(0));
    //wczytywanie tablicy
    for(int i=0; i<n; i++)
    {
        tab[i] = rand( );;
    }

    start = clock();
    MergeSort(tab, 0, (n-1)/2, n-1 );
    stop = clock();

    //drukowanie tablicy
    cout << endl << "Posortowana tablica metoda MergeSort: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }

    czas = (double)(stop - start)/CLOCKS_PER_SEC;
    cout<< endl<<"Sortowanie metoda MergeSort zajmie: "<<czas<<endl <<endl;

    //sprawdzanie tablicy
    int p=tab[0], blad=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i]<p)
        {
            blad++;
        }
        p=tab[i];
    }

    if(blad>0)
    {
        cout << "Wykryto "<< blad << "bledow" << endl;
    }
    else
        cout << "Nie wykryto bledow" << endl;

    //SelectionSort
    start = clock();
    SelectionSort(tab);
    stop = clock();

   //drukowanie tablicy
    cout << endl << "Posortowana tablica metoda SelectionSort: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }

    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << endl<< "Sortowanie metoda SelectionSort zajmie: " << czas << endl<< endl;

    //sprawdzanie tablicy
    int p2=tab[0], blad2=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i]<p2)
        {
            blad2++;
        }
        p2=tab[i];
    }

    if(blad2>0)
    {
        cout << "Wykryto "<< blad2 << "bledow" << endl;
    }
    else
        cout << "Nie wykryto bledow" << endl;

    return 0;
}

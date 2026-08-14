#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int w=10,k=10, G=5;
double najw, najm;
int indeks1i, indeks1j, indeks2i, indeks2j;

 struct SStudent
    {
       char inicjalimienia, inicjalnazwiska;
       double punkty;
    };

int main()
{

    // tabela rekordów
    SStudent A[w][k], schowek;


    // przypisanie inicjalu imienia, nazwiska i punktów do tablicy rekordow

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
          A[i][j].inicjalimienia=char ( 'A' + rand( )%('Z'+1-'A') );
          A[i][j].inicjalnazwiska=char ( 'A' + rand( )%('Z'+1-'A') );
          A[i][j].punkty=0+(G-0)*rand( )/double(RAND_MAX);
        }
    }

    // wydrukowanie tablicy

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
          cout << fixed << setw (5) << A[i][j].inicjalimienia;
          cout << fixed << setw (1) << A[i][j].inicjalnazwiska;
          cout << fixed << setw (5) << setprecision(2) << A[i][j].punkty;
        }
        cout << endl;
    }

    // najlepszy wynik na obwodzie tablicy (1 i ostatni wiersz)

    indeks1i=0;
    indeks1j=0;
    najw=A[0][0].punkty;
    for(int j=0;j<k;j++)
    {
        if(najw<A[0][j].punkty)
        {
        najw=A[0][j].punkty;
        indeks1i=0;
        indeks1j=j;
        }
        if(najw<A[w-1][j].punkty)
        {
        najw=A[w-1][j].punkty;
        indeks1i=w-1;
        indeks1j=j;
        }
    }



    // najlepszy wynik na obwodzie tablicy (1 i ostatnia kolumna)

    for(int i=1;i<w-1;i++)
    {
        if(najw<A[i][0].punkty)
        {
        najw=A[i][0].punkty;
        indeks1i=i;
        indeks1j=0;

        }
        if(najw<A[i][k-1].punkty)
        {
        najw=A[i][k-1].punkty;
        indeks1i=i;
        indeks1j=k-1;
        }
    }

    cout << endl;
    cout << "Polozenie w tablicy najlepszego studenta na obwodzie tablicy:  wiersz=" <<
    indeks1i << ",  kolumna=" << indeks1j << endl << endl;

    // Najslabszy student wewnatrz tablicy

    indeks2i=1;
    indeks2j=1;
    najm=A[1][1].punkty;
    for(int i=1;i<w-1;i++)
    {
        for(int j=1;j<k-1;j++)
        {
            if (najm>A[i][j].punkty)
            {
                najm=A[i][j].punkty;
                indeks2i=i;
                indeks2j=j;
            }
        }
    }

    cout << "Polozenie w tablicy najslabszego studenta wewnatrz tablicy:  wiersz=" <<
    indeks2i << ",  kolumna=" << indeks2j << endl << endl;

    // zamiana studentow

    schowek=A[indeks1i][indeks1j];
    A[indeks1i][indeks1j]=A[indeks2i][indeks2j];
    A[indeks2i][indeks2j]=schowek;


    // wydrukowanie tablicy #2

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
          cout << fixed << setw (5) << A[i][j].inicjalimienia;
          cout << fixed << setw (1) << A[i][j].inicjalnazwiska;
          cout << fixed << setw (5) << setprecision(2) << A[i][j].punkty;
        }
        cout << endl;
    }

    return 0;
}

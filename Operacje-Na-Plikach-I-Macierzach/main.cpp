#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int n=6, C=1, D=7, P=2;
double A[n][n], nm, schowek;
string nazwa;

int main()
{
    ifstream plk("daneR.txt");
    if (!plk.is_open())
    {
    cout << "Brak pliku o podanej nazwie";
    return 1;
    }

    // wczytanie stalej do tablicy
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j < n; j++)
     {
      A[i][j] = C;
     }
    }


  // wczytanie danych z pliku do tablicy
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
      plk >> A[i][j];
      }
    }


    // drukowanie tablicy
    for (int i=0; i<n ; i++)
    {
        for (int j=0; j<n ;j++)
        {
        cout << fixed << setprecision(P) << setw (D) << A[i][j];
        }
    cout << endl;
    }

    // druga tablica

    // przekatna
    for (int i=0; i<n; i++)
    {
        if(i==0 || nm>A[i][i])
        {
            nm=A[i][i];
        }
    }

    // zmiana wiersza
    for (int j=0; j<n ;j++)
        {
        A[1][j]=nm;
        }

    // zamiana skrajnych elementow

        schowek=A[0][5];
        A[0][5]=A[5][0];
        A[5][0]=schowek;


    cout << endl;

    // drukowanie tablicy
    for (int i=0; i<n ; i++)
    {
        for (int j=0; j<n ;j++)
        {
        cout << fixed << setprecision(P) << setw (D) << A[i][j];
        }
    cout << endl;
    }

    // zapis pliku

    cout << "Podaj nazwe pliku: ";
    cin >> nazwa;
        // otwieramy plik do zapisu
    ofstream plkz(nazwa);


    // drukowanie tablicy w pliku
    for (int i=1; i<n ; i=i+2)
    {
        for (int j=0; j<n ;j++)
        {
        plkz << fixed << setprecision(P) << setw (D) << A[i][j];
        }
    plkz << endl;
    }

    plkz.close();

    return 0;
}

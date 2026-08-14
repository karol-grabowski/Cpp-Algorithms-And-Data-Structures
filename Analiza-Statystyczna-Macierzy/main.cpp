#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

const int w=7, k=6;
double A[w][k], suma, max1;


int main()
{
    srand (time(0));
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {

         A[i][j]= 0+(5-0)*rand( )/double(RAND_MAX);     //przypisanie wartosci losowych
        }
    }
    cout << "Pierwsza tablica:\n";
    for (int i = 0; i < w; i++)
        {
        for (int j = 0; j < k; j++)
        {

        cout << setw(w) << fixed << setprecision(2) << A [i][j] ;                  //wydrukowanie tabeli
        suma = suma + A[i][j];                                          //obliczenie sumy
        }
        cout << "  Srednia ocen w tym wierszu: "<< fixed << setprecision(2) << suma/k ;            //wydrukowanie srednich
        suma=0;
        cout << endl;
        };
        cout << endl;



        // durga tabela

    cout << "Druga tablica:\n";
    for (int i = 0; i < w; i++)
        {
        for (int j = 0; j < k; j++)
        {
            suma = suma + A[i][j];        //obliczenie sumy w wierszu
        }
        for (int j = 0; j < k; j++)
        {
            if (A[i][j]<suma/k)
            {
            A[i][j]=suma/k;                                    //zamiana wartosci
            cout << setw(w)<< fixed << setprecision(2) << A [i][j] ;
            }
            else
            cout << setw(w)<< fixed << setprecision(2) << A [i][j] ;
        }
        cout << endl;
        suma=0;
        }

        //maksymalna wartosc w kolumnie

        cout << "Maksymalne wartosci w kolumnach" << endl;
        for (int j = 0; j < k; j++)
        {
            max1 = A[0][j] ;                                    //ustawienie wartosci max1
            for (int i = 0; i < w; i++)
            {
             if(A[i][j] > max1)
             {
                max1=A[i][j];                                   //zamiana wartosci
             }
            }
        cout << fixed << setprecision(2) << " " << max1 << "  ";           // wydrukowanie maksymalnych wartosci
        }



    return 0;
}

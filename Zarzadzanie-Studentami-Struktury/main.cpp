#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

const int n=5, Max=5;

struct SStudent
    {
       char inicjalimienia, inicjalnazwiska;
       double punkty;
    };


double tablica (SStudent X[n], double &reff )
{
    double nw=0, suma=0 ;

    // wczytywanie
    for (int i=0;i<n;i++)
     {
         X[i].inicjalimienia=char ( 'A' + rand( )%('Z'+1-'A') );
         X[i].inicjalnazwiska=char ( 'A' + rand( )%('Z'+1-'A') );
         X[i].punkty=0+(Max-0)*rand( )/double(RAND_MAX);
     }

    // drukowanie
    for (int i=0;i<n;i++)
    {
       cout << fixed << setw(3) << X[i].inicjalimienia;
       cout << fixed << setw(1) << X[i].inicjalnazwiska;
       cout << fixed << setw(5) << setprecision(2) << X[i].punkty;
    };
    cout << endl << endl;

    //najwyzsza ocena
    suma=0;
    nw=X[0].punkty;
      for (int i=0;i<n;i++)
    {
        suma=suma+X[i].punkty;
        if(nw<X[i].punkty)
        {
            nw=X[i].punkty;
        }
    };

    // srednia
    reff=suma/n;


    return  nw ;
}


int main()
{
    double nw_1, nw_2, srednia=0, srednia_1, srednia_2;

    SStudent G1[n], G2[n];

    srand (time(0));

    nw_1=tablica(G1, srednia );
    srednia_1=srednia;
    cout << endl;

    nw_2=tablica(G2, srednia );
    srednia_2=srednia;
    cout << endl;

    cout << "Roznica miedzy najwiekszymi ocenami: " << fabs( nw_1 - nw_2 )<< endl;
    if(srednia_1>srednia_2)
    {
        cout << "W tablicy G1 jest wyzsza srednia ocen " << endl;
    }
    else if(srednia_1<srednia_2)
    {
        cout << "W tablicy G2 jest wyzsza srednia ocen " << endl;
    }
    else
        cout << "Srednie ocen sa rowne " << endl;

    return 0;
}

#include <iostream>

using namespace std;

int k, x, s, suma=0, licznik, schowek;
const int n=5;
string m;

int main()
{
    do
    {
    cout << "Wpisz liczbe calkowita jednocyfrowa dodatnia" << endl;
    cin >> k;
    }
    while(k<=0 || k>=10);

    for (x=1;x<=k;x++)
    {
     cout << "Wpisz dowonly napis: " ;
     cin >> m;
     s = m.size();
     if (m[0]== m[s-1])
     {
         suma = suma+s;
         licznik++ ;
     }
    }

    if (licznik==0)
     cout << "Zeby wyliczyc srednia dlugosc napisow, w ktorych pierwszy i ostatni znak sa takie same musisz podac co najmniej jeden napis w ktorych pierwszy i ostatni znak sa takie same" << endl;
    else
     cout << "Srednia dlugosc napisow, w ktorych pierwszy i ostatni znak sa takie same: " << suma/licznik << endl;

    char A[n];

    cout << "Wpisz " << n << " dowolnych znakow" << endl;

    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
     cout << "Wpisane znaki : " << endl;
    for(int i=0;i<n;i++)
    {
        cout << A[i] << endl;

    }

     schowek=A[n-1];

     for (int i = n-1; i > 0; i--)
     A[i] = A[i-1];
     A[0] = schowek;

    cout << "Przesuniecie cykliczne o 1 miejsce w prawo" << endl;

     for(int i=0;i<n;i++)
    {
        cout << A[i] << endl;

    }

    return 0;
}

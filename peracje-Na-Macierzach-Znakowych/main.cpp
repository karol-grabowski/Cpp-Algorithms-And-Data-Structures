#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

const int w=5, k=5;

void wczytaj(char znak1, char znak2, char X[w][k])
{
    // wczytywanie]
    srand (time(0));
  for (int i=0;i<w;i++)
  {
     for (int j=0;j<k;j++)
     {
         X[i][j]=char ( znak1 + rand( )%(znak2+1-znak1) );
     }
  }
}
    //drukowanie
void drukuj (char X[w][k])
{
  for (int i=0;i<w;i++)
  {
    for (int j = 0; j < k; j++)
    {
      cout << setw(3) << X[i][j];
    }
    cout << endl;
  };
  cout << endl;
}
    //wypelnianie
void wypelnij (char X[w][k], char znak_sz, char znak_zm)
{
  int licz=0;

  for (int i=0;i<w;i++)
  {
    for (int j=0;j<k;j++)
    {
        if(X[i][j]==znak_sz)
        {
         licz++;
        }
    }
        if(licz==0)
        {
            for (int j=0;j<k;j++)
            {
                X[i][j]=znak_zm;
            }
        }
    licz=0;
  };
}

int main()
{
    char Li[w][k], Cy[w][k]; // tablice

    wczytaj('A', 'Z', Li);
    wczytaj('0', '9', Cy);
    drukuj(Li);
    drukuj(Cy);
    wypelnij(Li, 'P', '%');
    drukuj(Li);
    wypelnij(Cy, '5', '&');
    drukuj(Cy);

    return 0;
}

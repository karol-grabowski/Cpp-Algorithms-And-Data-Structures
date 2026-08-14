#include <iostream>

using namespace std;

const int n=5;

struct Telement
{
  int rok_wejscia;
  string nazwa_firmy, siedziba_firmy;
  Telement *next;
};

void drukuj_liste_it(Telement *adres)
{
  while (adres!=NULL)
  {
    cout << adres->nazwa_firmy << " ";
    cout << adres->siedziba_firmy << " ";
    cout << adres->rok_wejscia << " ";
    adres = adres->next;
    cout << endl;
  }
}

 void usun_liste_it (Telement *&glowa)
 {
   Telement *poprzedni;
   while (glowa != NULL)
  	 {
  	  poprzedni=glowa;
  	  glowa=glowa->next;
   	  delete poprzedni;
     }
 }

int main()
{
    int rok=0, i=0 ;
    string nazwa, siedziba;
    int *ostatni, *przedostatni;

    ostatni=NULL;
    przedostatni=NULL;

      Telement *glowa, *aktualny, *poprzedni, *adres, *tmp, *nowy;

      aktualny = NULL;
      poprzedni = NULL;
      glowa = poprzedni;

      while (i<n)
      {
          cout << "Podaj nazwe firmy: ";
          cin >> nazwa;

          cout << "Podaj siedzibe firmy: ";
          cin >> siedziba;

          cout << "Podaj rok wejscia na gielde: " << endl;
          cin >> rok;

          cout  << endl;

        poprzedni = aktualny;
        aktualny = new Telement;
        aktualny->nazwa_firmy = nazwa;
        aktualny->siedziba_firmy = siedziba;
        aktualny->rok_wejscia = rok;
        aktualny->next = NULL;
        if (poprzedni != NULL)
          poprzedni->next = aktualny;
        else
          glowa = aktualny;

        i++;
      };

      aktualny = glowa;
      poprzedni = NULL;

        int j=0;

      for(int i=0; i<n; i++)
      {
         poprzedni=glowa;
         aktualny=poprzedni->next;

         while ( i>0 && j==0 && i<n )
          {
            if(poprzedni->rok_wejscia>aktualny->rok_wejscia)
              {
                  ostatni=&aktualny->rok_wejscia;
                  j++;
              }
              poprzedni=aktualny;
              aktualny=aktualny->next;

            i++;
          };

          while ( i>0 && j!=0 && i<n )
          {
            if(poprzedni->rok_wejscia>aktualny->rok_wejscia)
              {
                  przedostatni=ostatni;
                  ostatni=&aktualny->rok_wejscia;
              }
              poprzedni=aktualny;
              aktualny=aktualny->next;

            i++;
          };
      }

      cout << endl << endl;
      cout << "Drukowanie tablicy 1 : " << endl;

      adres = glowa;
      drukuj_liste_it(adres);

          aktualny=glowa;
          poprzedni= NULL;
          while (aktualny != NULL)
          {
            if (&aktualny->rok_wejscia == przedostatni)
            {
              if (aktualny == glowa)
                glowa = glowa->next;
              else
                poprzedni->next = aktualny->next;
              tmp = aktualny;
              aktualny = aktualny->next;
              delete tmp;
            }
            else
            {
              poprzedni = aktualny;
              aktualny = aktualny->next;
            };
          };

          cout << endl;
          cout << "Nowa firma na gieldzie: " << endl;

          if(glowa != NULL)
          {
             nowy = new Telement;
            cout << "Podaj nazwe firmy: ";
            cin >> nowy->nazwa_firmy;
            cout << "Podaj siedzibe firmy:  ";
            cin >> nowy->siedziba_firmy;
            cout << "Podaj rok wejscia na gielde:  ";
            cin >> nowy->rok_wejscia;

            poprzedni = glowa;
            tmp = poprzedni->next;
            poprzedni->next = nowy;
            nowy->next = tmp;
          }


          cout << endl;
          cout << "Drukowanie tablicy 2 : " << endl;

      adres = glowa;
      drukuj_liste_it(adres);

      adres = glowa;
      usun_liste_it (adres);

        cout << "Drukowanie tablicy 3 : " << endl;
      drukuj_liste_it(adres);

    return 0;
}

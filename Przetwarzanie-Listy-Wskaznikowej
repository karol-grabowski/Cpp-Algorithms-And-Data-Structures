#include <iostream>
#include <fstream>

using namespace std;

const int n=12;

struct str
{
    string nazwa_firmy, siedziba_firmy;
    int rok_wejscia;
    str *next;
};

//drukowanie
void drukuj(str *adres, string naglowek)
{
    cout << naglowek << endl;
  while (adres!=NULL)
  {
    cout << adres->nazwa_firmy << " ";
    cout << adres->siedziba_firmy << " ";
    cout << adres->rok_wejscia << "  " ;
    adres = adres->next;
    cout << endl;
  }
  cout << endl;
}

//tworzenie listy
void tworz (string nazwa, string siedziba, int rok, str *&head)
{
    if(head==NULL)
    {
        str *nowy=new str;
        nowy->nazwa_firmy=nazwa;
        nowy->siedziba_firmy= siedziba;
        nowy->rok_wejscia=rok;
        nowy->next=NULL;
        head=nowy;
    }
    else
    {
        str *ost=head, *nowy=new str;
        while(ost->next!=NULL)
        {
            ost=ost->next;
        }
        ost->next=nowy;
        nowy->next=NULL;
        nowy->nazwa_firmy=nazwa;
        nowy->siedziba_firmy= siedziba;
        nowy->rok_wejscia=rok;
    }
    return;
}

//funkcja
void funkcja(char litera, str *&head, str *nowa, int k)
{
    str *akt=new str, *ostatni=new str, *przedo=new str;
    int pierwsza=0, ostatni_t=0;

    akt=head;
    ostatni=NULL;

    //drukowanie
    drukuj(head, "Lista danych wczytanych z pliku: ");

    //usuwanie
    pierwsza=akt->rok_wejscia;

    while (akt!=NULL)
    {
      przedo=ostatni;
        int j=0;
          for(int i=0 ; i<akt->nazwa_firmy.size() ; i++)
          {
              if(akt->nazwa_firmy[i]==litera && akt->rok_wejscia<pierwsza)
              {
                j++;
              }
          }
          ostatni=akt;
          akt=akt->next;
          if(j>0)
          {
              delete ostatni;
              przedo->next=akt;
              ostatni=przedo;
          }
          if(akt==NULL)
          {
              ostatni_t=ostatni->rok_wejscia;
          }
      }

      //drukowanie
      drukuj(head, "Lista po usuwaniu: ");

      //dodawanie
    akt=head;
    ostatni=NULL;

    int i=0;
    while (akt!=NULL)
       {
           if(ostatni_t<akt->rok_wejscia)
           {
               i++;
           }
           if(i==k && akt!=head)
           {
               str *dodany = new str;
               dodany->nazwa_firmy=nowa->nazwa_firmy;
               dodany->siedziba_firmy=nowa->siedziba_firmy;
               dodany->rok_wejscia=nowa->rok_wejscia;
               dodany->next=akt;
               ostatni->next=dodany;
               i=0;
           }
           if(i==k && akt==head)
           {
               str *dodany=new str;
               dodany->nazwa_firmy=nowa->nazwa_firmy;
               dodany->siedziba_firmy=nowa->siedziba_firmy;
               dodany->rok_wejscia=nowa->rok_wejscia;
               dodany->next=akt;
               head=dodany;
               i=0;
           }

           ostatni=akt;
           akt=akt->next;
       }
        drukuj(head, "Lista po dodawaniu: ");
}

int main()
{
    int rok=0, i=0 ;
    string nazwa, siedziba;
    char litera;

    str *glowa=NULL, *akt, *nowa=new str;

    ifstream plk("Dane.txt");
    if (!plk.is_open())
    {
        cout << "Brak pliku o podanej nazwie";
        return 1;
    }

    while(i<n)
    {
        plk >> nazwa;
        plk >> siedziba;
        plk >> rok;

        //tworzenie listy
        tworz(nazwa, siedziba, rok, glowa );
        i++;
    }

    cout << endl;
    cout << "Podaj litere: " << endl;
    cin >> litera;

    cout << "Podaj dane nowej firmy: " << endl;
    cout << "Nazwa firmy: " << endl;
    cin >> nowa->nazwa_firmy;
    cout << "Siedziba firmy: " << endl;
    cin >> nowa->siedziba_firmy;
    cout << "Rok wejscia: " << endl;
    cin >> nowa->rok_wejscia;
    cout << endl;

    //funkcja
    funkcja(litera, glowa, nowa, 3);

    //usuwanie listy
    while(glowa!=NULL)
    {
    akt=glowa;
    glowa=akt->next;
    delete akt;
    }

    return 0;
}

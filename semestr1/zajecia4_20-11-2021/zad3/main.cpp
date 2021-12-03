#include <iostream>
#include <array>

using namespace std;

int main()
{
    char tab[15] = {'L','U','K','A','S','Z',' ','S','O','L','D','A','T','K','E'};
    for(int i=0; i<=14; i++)
    {
        cout << tab[i];
    }
    cout << endl;
    //Szyfr Cezara - przesuniecie wszystkich znakow w tablicy o stala wartosc (tutaj - o 3 znaki do przodu)
    for(int i=0; i<=14; i++)
    {
        tab[i]=tab[i]+3;
    }
    tab[5]='A'+2; //Pominiecie znakow specjalnych
    tab[6]=' '; //Zamiana znaku '#' na spacje
    for(int i=0; i<=14; i++)
    {
        cout << tab[i];
    }
    cout << endl;
    return 0;
}

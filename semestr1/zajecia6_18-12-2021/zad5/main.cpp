#include <iostream>
#include <array>

using namespace std;

int skalarny(int * wsk_n, int * wsk_X, int * wsk_Y) // oblicza iloczyn skalarny dwoch wektorow calkowitoliczbowych
{
    int iloczyn = 0;

    for(int i = 0; i < *wsk_n; i++)
    {
        iloczyn = iloczyn + (wsk_X[i] * wsk_Y[i]);
    }

    return iloczyn;
}

/* void dane(int * wsk_n, int * wsk_tab) // wczytuje biezacy rozmiar tablicy
{

}

void wypelnij() // wypelnia tablice liczbami losowymi
{

} */

void wyswietl(int * wsk_n, int * wsk_tab) // wypisuje zawartosc tablicy
{
    for(int i = 0; i < *wsk_n; i++)
    {
        cout << *wsk_tab[i];
    }
    cout << endl;
}

int main()
{
    int tab1[3] = {2,4,6}, tab2[3] = {3,5,7};
    // int tab1[10] = {2,4,6,8,8,4,6,2,2,4}, tab2[10] = {3,5,7,9,9,7,5,3,3,5};
    int tabsize;
    int *wsk_tab1, *wsk_tab2, *wsk_tabsize;
    tabsize = sizeof(tab1[3]);
    wsk_tab1 = &tab1[3];
    wsk_tab2 = &tab2[3];
    wsk_tabsize = &tabsize;

    //cout << wsk_tabsize << " " << wsk_tab1 << " " << wsk_tab2 << endl;
    cout << skalarny(wsk_tabsize, wsk_tab1, wsk_tab2);
    cout << endl;

    return 0;
}

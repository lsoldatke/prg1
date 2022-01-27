#include <iostream>
#include <array>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Funkcja obliczajaca iloczyn skalarny dwoch wektorow calkowitoliczbowych

int skalarny(int *wsk_n, int *wsk_X, int *wsk_Y)
{
    int iloczyn = 0;

    for(int i = 0; i < *wsk_n; i++)
    {
        iloczyn = iloczyn + *(wsk_X + i) * *(wsk_Y + i);
    }

    return iloczyn;
}

// Funkcja wczytujaca biezacy rozmiar tablicy i wypelniajaca ja liczbami losowymi

void dane(int *wsk_n, int *wsk_tab)
{
    for (int i = 0; i < *wsk_n; i++)
    {
        wsk_tab[i] = rand()%9+1;
    }
}

// Funkcja wypisujaca zawartosc tablicy

void wyswietl(int *wsk_n, int *wsk_tab)
{
    for(int i = 0; i < *wsk_n; i++)
    {
        cout << wsk_tab[i];
    }
    cout << endl;
}

int main()
{
    int n = 0;

    cout << "Podaj rozmiar wektorow: ";
    cin >> n;
    while (n < 1 || n > 10)
    {
        cout << "Podaj prawidlowy rozmiar tablicy (1-10): ";
        cin >> n;
    }

    int tab1[n], tab2[n];
    int  *wsk_n, *wsk_tab1, *wsk_tab2;
    wsk_n = &n;
    wsk_tab1 = &tab1[n];
    wsk_tab2 = &tab2[n];
    cout << endl;

    srand(time(NULL));
    dane(wsk_n, wsk_tab1);
    dane(wsk_n, wsk_tab2);

    cout << "Wektor 1:" << endl;
    wyswietl(wsk_n, wsk_tab1);
    cout << "Wektor 2:" << endl;
    wyswietl(wsk_n, wsk_tab2);
    cout << endl;

    cout << "Iloczyn skalarny:" << endl;
    cout << skalarny(wsk_n, wsk_tab1, wsk_tab2) << endl;

    return 0;
}

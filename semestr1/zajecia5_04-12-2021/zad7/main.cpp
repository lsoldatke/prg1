#include <iostream>
#include <array>
#include <stdio.h> //Zawiera NULL
#include <stdlib.h> //Zawiera rand, srand
#include <time.h> //Zawiera time

using namespace std;

void look(int n, int tab[10][10])
{
    int maks=tab[0][0];
    int maks_i;
    int maks_j;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[i][j]>maks)
            {
                maks=tab[i][j];
                maks_i=i;
                maks_j=j;
            }
        }
    }
    cout << endl;
    cout << "Element maksymalny macierzy: " << maks << " " << "w tab[" << maks_i << "]" << "[" << maks_j << "]" <<  endl;
    cout << endl;
}

void przekatna(int n, int tab[10][10])
{
    int suma;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                suma=suma+tab[i][j];
            }
        }
    }
    cout << "Suma elementow na przekatnej macierzy: " << suma;
    cout << endl;
}

void zamiana(int tab[10][10])
{
    int k;
    int p;
    cout << "Podaj pierwszy wiersz (k): ";
    cin >> k;
    cout << "Podaj drugi wiersz (p): ";
    cin >> p;
    if(k<0 || k>10 || p<0 || p>10)
    {
        cout << "Podaj k i p w zakresie 0-10." << endl;
        cout << "Podaj pierwszy wiersz (k): ";
        cin >> k;
        cout << "Podaj drugi wiersz (p): ";
        cin >> p;
    }
    swap(tab[k],tab[p]);
    cout << endl;
}

int main()
{
    int tablica[10][10];
    //Wprowadzanie rzeczywistych wymiarow tablicy
    int n=10;
    int m=10;
    cout << "Podaj rzeczywisty wymiar tablicy (wierszowy (n<=10): ";
    cin >> n;
    if(n>10)
    {
        n=10;
        cout << "Wartosc wymiaru n nie moze byc wieksza niz 10. Podaj poprawna wartosc." << endl;
        cout << "Podaj rzeczywisty wymiar tablicy (wierszowy (n<=10)): ";
        cin >> n;
    }
    cout << "Podaj rzeczywisty wymiar tablicy (kolumnowy (m<=10)): ";
    cin >> m;
    if(m>10)
    {
        m=10;
        cout << "Wartosc wymiaru m nie moze byc wieksza niz 10. Podaj poprawna wartosc." << endl;
        cout << "Podaj rzeczywisty wymiar tablicy (kolumnowy (m<=10)): ";
        cin >> m;
    }
    cout << endl;
    //Wypelnienie tablicy losowymi wartosciami z zakresu 0-9
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tablica[i][j]=rand()%10;
        }
    }
    //Wyswietlenie tablicy o rozmiarach rzeczywistych n,m
    cout << "Tablica:" << endl;
    cout << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << tablica[i][j] << " ";
            if(j%10==0)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
    //Wywolanie funkcji look, przekatna i zamiana
    look(n,tablica);
    przekatna(n,tablica);
    cout << endl;
    zamiana(tablica);
    //Ponowne wyswietlenie tablicy o rozmiarach rzeczywistych n,m
    cout << "Tablica po zmianach:" << endl;
    cout << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << tablica[i][j] << " ";
            if(j%10==0)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}

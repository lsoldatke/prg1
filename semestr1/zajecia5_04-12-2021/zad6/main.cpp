#include <iostream>
#include <vector>
#include <array>
#include <stdio.h> //Zawiera NULL
#include <stdlib.h> //Zawiera rand, srand
#include <time.h> //Zawiera time

using namespace std;

//Wypelnianie tablicy przypadkowymi liczbami z zakresu 0-9
void full(int n, int tab[])
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        int x;
        x=rand()%10;
        tab[i]=x;
    }
}

//Wypisanie tablicy
void show(int &n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}

//Iloczyn skalarny dwoch wektorow
 int skalarny(int n, vector<int>X, vector<int>Y)
{
    int wynik_skalarny=0;
    for(int i=0; i<n; i++)
    {
        wynik_skalarny=wynik_skalarny+(X.at(i)*Y.at(i));
    }
    return wynik_skalarny;
}

int main()
{
    vector<int>A(15);
    vector<int>B(15);
    int q=0;
    int p=0;
    cout << "Podaj rzeczywisty wymiar (q) dla tablicy A: ";
    cin >> q;
    cout << "Podaj rzeczywisty wymiar (p) dla tablicy B: ";
    cin >> p;
    int tabA[q];
    int tabB[p];
    full(q,tabA);
    full(p,tabB);
    cout << endl;
    cout << "Tablica A:" << endl;
    show(q,tabA);
    cout << endl;
    cout << endl;
    cout << "Tablica B:" << endl;
    show(p,tabB);
    cout << endl;
    //Przepisanie tablic do wektorow
    for(int i=0; i<q; i++)
    {
        A.at(i)=tabA[i];
    }
    for(int i=0; i<p; i++)
    {
        B.at(i)=tabB[i];
    }
    cout << endl;
    skalarny(15,A,B);
    cout << "Iloczyn skalarny: " << skalarny;
    cout << endl;
    //Wypisanie wektorow
/*    cout << "Wektor A:" << endl;
    for(int i=0; i<15; i++)
    {
        cout << A.at(i) << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Wektor B:" << endl;
    for(int i=0; i<15; i++)
    {
        cout << B.at(i) << " ";
    }
    cout << endl; */
    return 0;
}

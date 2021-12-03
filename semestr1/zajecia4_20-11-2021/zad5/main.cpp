#include <iostream>
#include <array>
#include <stdio.h> //Zawiera NULL
#include <stdlib.h> //Zawiera rand, srand
#include <time.h> //Zawiera time

using namespace std;

int main()
{
    int k;
    int wynik=0;
    cout << "Podaj k: ";
    cin >> k;
    int A[50];
    //Losowosc
    srand(time(NULL));
    for(int i=0; i<=49; i++)
    {
        A[i]=rand()%k+1;
    }
    //Wyswietlenie calej tablicy
    cout << endl;
    cout << "Tablica A:" << endl;
    for(int i=0; i<=49; i++)
    {
        cout << A[i];
    }
    cout << endl;
    //Wyswietla elementy tablicy z zakresu A[30]-A[42], z ktorych obliczana jest suma:
/*    cout << endl;
    cout << "Elementy tablicy A z zakresu A[30]-A[42]:" << endl;
    for(int i=30; i<=42; i++)
    {
        cout << A[i];
    }
    cout << endl; */
    //Wyswietla wynik z zakresu A[30]-A[42]:
    for(int i=30; i<=42; i++)
    {
        wynik=wynik+A[i];
    }
    cout << endl;
    cout << "Suma elementow A[30]-A[42]: " << wynik << endl;
    return 0;
}

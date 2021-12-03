#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int rozmiar;
    cout << "Ile liczb chcesz wpisac do tablicy: ";
    cin >> rozmiar;
    cout << endl;
    int A[rozmiar];
    vector<int>V(rozmiar);
    //Wprowadzanie wartosci do tablicy
    for(int i=0; i<rozmiar; i++)
    {
        int x;
        cout << "Podaj " << i+1 << " element tablicy: ";
        cin >> x;
        A[i]=x;
    }
    //Sortowanie tablicy
    for(int i=0; i<rozmiar; i++)
    {
        for(int j=0; j<rozmiar; j++)
        {
            if(A[j-1]>A[j])
            {
                int tmp=A[j-1];
                A[j-1]=A[j];
                A[j]=tmp;
            }
        }
    }
    //Przepisywanie tablicy do wektora
    for(int i=0; i<rozmiar; i++)
    {
        V.at(i)=A[i];
    }
    //Wypisanie posortowanej tablicy
/*    cout << endl;
    cout << "Posortowana tablica: " << endl;
    for(int i=0; i<rozmiar; i++)
    {
        cout << A[i];
    } */
    cout << endl;
    cout << "Wektor: " << endl;
    for(int i=0; i<rozmiar; i++)
    {
        cout << V.at(i);
    }
    cout << endl;
    return 0;
}

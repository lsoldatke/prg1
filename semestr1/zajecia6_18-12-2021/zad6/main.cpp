#include <iostream>
#include <array>

using namespace std;

void pokaz_tablice(int tab[])
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << tab[i];
    }
    cout << endl;
}

int *odwracanie(int tab[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int tmp = 0;
        tmp = tab[n-i-1];
        tab[n-i-1] = tab[i];
        tab[i] = tmp;
    }

    return tab;
}

int main()
{
    int tablica[10] = {1,2,3,4,5,6,7,8,9,0};
    int n = 5;

    cout << "Podaj ile elementow tablicy chcesz odwrocic (2-10): ";
    cin >> n;
    while (n < 2 || n > 10)
    {
        cout << "Podaj poprawna wartosc (2-10): ";
        cin >> n;
    }
    cout << endl;

    cout << "oryginalna tablica:";
    pokaz_tablice(tablica);
    cout << endl;

    /* dwukrotne odwrocenie tablicy oznaczajace zwrocenie takiej samej
    tablicy jak pierwotna */

    cout << "podwojnie odwrocona tablica:";
    odwracanie(odwracanie(tablica,n),n);
    pokaz_tablice(tablica);

    return 0;
}

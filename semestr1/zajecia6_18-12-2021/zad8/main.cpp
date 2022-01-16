#include <iostream>

using namespace std;

struct ulamek
{
    int licznik;
    int mianownik;
    float wartosc;
};

struct ulamek wynik;

ulamek mnozenie(ulamek a, ulamek b)
{
    wynik.licznik = a.licznik * b.licznik;
    wynik.mianownik = a.mianownik * b.mianownik;
    wynik.wartosc = a.wartosc * b.wartosc;

    return wynik;
}

int main()
{
    float *w_licz1, *w_mian1, *w_licz2, *w_mian2;
    void *wskV_licz1, *wskV_mian1, *wskV_licz2, *wskV_mian2;

    ulamek ulamek1;
        ulamek1.licznik = 3;
        ulamek1.mianownik = 5;

        int *wsk_licz1 = &ulamek1.licznik;
        int *wsk_mian1 = &ulamek1.mianownik;

    ulamek ulamek2;
        ulamek2.licznik = 3;
        ulamek2.mianownik = 4;

        int *wsk_licz2 = &ulamek2.licznik;
        int *wsk_mian2 = &ulamek2.mianownik;

    wskV_licz1 = wsk_licz1;
    wskV_mian1 = wsk_mian1;
    wskV_licz2 = wsk_licz2;
    wskV_mian2 = wsk_mian2;

    w_licz1 = static_cast<float*>(wskV_licz1);
    w_mian1 = static_cast<float*>(wskV_mian1);
    w_licz2 = static_cast<float*>(wskV_licz2);
    w_mian2 = static_cast<float*>(wskV_mian2);

        ulamek1.wartosc = *w_licz1 / *w_mian1;
        ulamek2.wartosc = *w_licz2 / *w_mian2;

    mnozenie(ulamek1, ulamek2);

    cout << "ulamek1:" << endl;
    cout << ulamek1.licznik << "/" << ulamek1.mianownik << " = " << ulamek1.wartosc << endl;
    cout << endl;
    cout << "ulamek2:" << endl;
    cout << ulamek2.licznik << "/" << ulamek2.mianownik << " = " << ulamek2.wartosc << endl;
    cout << endl;
    cout << "nowy ulamek (ulamek1 * ulamek2):" << endl;
    cout << wynik.licznik << "/" << wynik.mianownik << " = " << wynik.wartosc << endl;

    return 0;
}

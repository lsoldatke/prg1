#include <iostream>
#include <array>

using namespace std;

int main()
{
    char tab[95];
    for(int i=32; i<=127; i++)
    {
        char a=i;
        tab[i-32]=a;
    }
    cout << "Tablica zawierajaca znaki ASCII z przedzialu 33-126:" << endl;
    for(int i=0; i<=94; i++)
    {
        cout << tab[i];
        if (i%30==0)
        {
            cout << endl;
        }
    }
    //Wyswietlenie tablicy ASCII z zakresu 33-126
/*    cout << endl;
    cout << endl;
    cout << "Tablica ASCII zakresu 33-126:" << endl;
    cout << endl;
    for(int i=33; i<=126; i++)
    {
        char a=i;
        cout << i << "=" << a << " ";
        if (i%10==0)
        {
            cout << endl;
        }
    } */
    //Wyswietlenie calej tablicy ASCII
/*    cout << endl;
    cout << endl;
    cout << "Cala tablica ASCII:" << endl;
    cout << endl;
    for(int i=0; i<256; i++)
    {
        char a=i;
        cout << i << "=" << a << " ";
        if (i%10==0)
        {
            cout << endl;
        }
    } */
    cout << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x;
    int p;
    int w=1;
    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << "Podaj potege liczby x: ";
    cin >> p;
    for (int i=0; i<p; i++)
    {
        w=w*x;
    }
    cout << "Wynik: " << w << endl;
    return 0;
}

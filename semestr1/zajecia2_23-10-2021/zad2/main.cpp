#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    if (a>b)
    {
        cout << "Podaj najpierw mniejsza liczbe" << endl;
    }
    for (int i=a; i<=b; i++)
    {
        if (a<b && i%c==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

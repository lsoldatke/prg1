#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a>b)
    {
        cout << "Podaj najpierw mniejsza liczbe" << endl;
    }
    for (int i=a; i<=b; i++)
    {
        cout << i <<endl;
    }
    return 0;
}

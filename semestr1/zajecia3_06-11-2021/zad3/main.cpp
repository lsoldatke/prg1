#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    char d;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Wybierz dzialanie: ";
    cin >> d;
    switch (d)
    {
        case '+':
            cout << a+b << endl;
        break;
        case '-':
            cout << a-b << endl;
        break;
        case '*':
            cout << a*b << endl;
        break;
        case '/':
            cout << a/b << endl;
        break;
        default:
            cout << "Podaj wlasciwe dzialanie" << endl;
        break;
    }
    return 0;
}

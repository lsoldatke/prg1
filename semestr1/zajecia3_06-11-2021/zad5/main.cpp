#include <iostream>

using namespace std;

float a;
float b;
char d;

float dodaj(float a, float b)
{
    return a+b;
}

float odejmij(float a, float b)
{
    return a-b;
}

float razy(float a, float b)
{
    return a*b;
}

float dziel(float a, float b)
{
    return a/b;
}

int main()
{
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    cout << "Podaj dzialanie: " << endl;
    cin >> d;
    cout << endl;
    switch(d)
    {
        case '+':
            cout << dodaj(a,b) << endl;
        break;
        case '-':
            cout << odejmij(a,b) << endl;
        break;
        case '*':
            cout << razy(a,b) << endl;
        break;
        case '/':
            cout << dziel(a,b) << endl;
        break;
        default:
            cout << "Podaj wlasciwa operacje" << endl;
        break;
    }
    return 0;
}

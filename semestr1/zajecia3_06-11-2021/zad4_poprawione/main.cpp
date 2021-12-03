#include <iostream>

using namespace std;

void moja_funkcja(int a, int b)
{
    int a_f = a*2;
    int b_f = b+100;
    cout << a << "*2" << " = " << a_f << endl;
    cout << b << "+100" << " = " << b_f << endl;
}

int main()
{
    int a;
    int b;
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    cout << endl;
    moja_funkcja(a,b);
    return 0;
}

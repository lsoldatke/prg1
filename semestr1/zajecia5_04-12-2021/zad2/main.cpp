#include <iostream>

using namespace std;

void fake(int a, int b)
{
    cout << "void fake:" << endl;
    cout << "x=" << a << " " << "y=" << b << endl;
    int wynik_x, wynik_y;
    wynik_x=a+2;
    wynik_y=b+2;
    cout << "wynik_x=" << wynik_x << " " << "wynik_y=" << wynik_y;
}

void refer(int &a, int &b)
{
    cout << "void refer:" << endl;
    cout << "x=" << a << " " << "y=" << b << endl;
    int wynik_x, wynik_y;
    wynik_x=a+3;
    wynik_y=b+3;
    cout << "wynik_x=" << wynik_x << " " << "wynik_y=" << wynik_y;
}

int main()
{
    int x=5, y=10;
    cout << "x=" << x << " " << "y=" << y << endl;
    cout << endl;
    fake(x,y);
    cout << endl;
    cout << endl;
    refer(x,y);
    cout << endl;
    return 0;
}

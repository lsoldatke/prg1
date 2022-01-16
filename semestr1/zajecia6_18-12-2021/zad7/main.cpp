#include <iostream>

using namespace std;

struct trojkat
{
    float bokA;
    float bokB;
    float bokC;
};

float obwod(trojkat t)
{
    float wynik;
    wynik = t.bokA + t.bokB + t.bokC;

    return wynik;
}

int main()
{
    struct trojkat t;
        t.bokA = 1.55;
        t.bokB = 7.82;
        t.bokC = 12.34;

    cout << "bokA = " << t.bokA << endl;
    cout << "bokB = " << t.bokB << endl;
    cout << "bokC = " << t.bokC << endl;
    cout << endl;
    cout << "obwod trojkata t = " << obwod(t) << endl;

    return 0;
}

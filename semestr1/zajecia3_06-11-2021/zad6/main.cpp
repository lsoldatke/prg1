#include <iostream>

using namespace std;

int a;
int b;
int c;

int max2(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max3(int a, int b, int c)
{
    if(max2(a,b)>c)
    {
        return max2(a,b);
    }
    else
    {
        return c;
    }
}

int main()
{
    cout << "Podaj liczbe a: " << endl;
    cin >> a;
    cout << "Podaj liczbe b: " << endl;
    cin >> b;
    cout << "Podaj liczbe c: " << endl;
    cin >> c;
    cout << "wynik max2: " << max3(a,b,c) << endl;
    return 0;
}

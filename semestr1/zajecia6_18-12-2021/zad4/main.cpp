#include <iostream>

using namespace std;

double x = 0;

double fun(double m)
{
    double wynik = 0;

    for (int i = 1; i <= m; i++)
    {
        wynik = wynik + i;
    }

    return wynik;
}

double (*f)(double) = &fun;

auto fSum(double(*f)(double), int n, int m) -> double
{
    double wynik = 0;

    for (double i = n; i <= m; i++)
    {
        wynik = wynik + f(x);
    }

    return wynik;
}

int main()
{
    int n = 1, m = 10;

    cout << "Podaj parametr wejsciowy dla funkcji fun(): ";
    cin >> x;

    cout << endl;
    cout << "wynik fun(): " << fun(x) << endl;
    cout << "wynik fSum(double(*f)(double), int n, int m): " << fSum(f,n,m) << endl;

    return 0;
}

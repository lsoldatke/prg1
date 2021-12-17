#include <iostream>

using namespace std;

int wynik_iloczyn_void_arg, wynik_iloczyn_void;

int iloczyn_int_arg(int a, int b)
{
    int wynik_iloczyn_int_arg;
    wynik_iloczyn_int_arg=a*b;
    return wynik_iloczyn_int_arg;
}

int iloczyn_int()
{
    int a;
    int b;
    int wynik;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    wynik=a*b;
    return wynik;
}

void iloczyn_void_arg(int a, int b)
{
    int wynik;
    wynik=a*b;
    wynik_iloczyn_void_arg=wynik;
}

void iloczyn_void()
{
    int a, b, wynik;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    wynik=a*b;
    wynik_iloczyn_void=wynik;
}

int main()
{
    int a;
    int b;
    cout << "Wprowadz a: ";
    cin >> a;
    cout << "Wprowadz b: ";
    cin >> b;
    cout << endl;
    //int iloczyn(int a, int b)
    cout << "int iloczyn(int a, int b):" << endl;
    cout << "wynik:" << iloczyn_int_arg(a,b) << endl;
    cout << endl;
    //void iloczyn(int a, int b)
    cout << "void iloczyn(int a, int b):" << endl;
    iloczyn_void_arg(a,b);
    cout << "wynik: " << wynik_iloczyn_void_arg << endl;
    cout << endl;
    //int iloczyn()
    cout << "int iloczyn():" << endl;
    iloczyn_int();
    cout << "wynik: " << iloczyn_int << endl;
    cout << endl;
    //void iloczyn()
    cout << "void iloczyn()" << endl;
    iloczyn_void();
    cout << "wynik: " << wynik_iloczyn_void;
    cout << endl;
    return 0;
}

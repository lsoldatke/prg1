#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Lukasz Soldatke";
    string * name_pointer;
    name_pointer = &name;

    cout << "Zmienna wskazywana:" << endl;
    cout << "wartosc: " << *name_pointer << endl;
    cout << "adres: " << name_pointer << endl;
    cout << "rozmiar: " << sizeof(*name_pointer) << endl;

    cout << endl;

    cout << "Wskaznik:" << endl;
    cout << "wartosc: " << name_pointer << endl;
    cout << "adres: " << &name_pointer << endl;
    cout << "rozmiar: " << sizeof(name_pointer) << endl;

    return 0;
}

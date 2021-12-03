#include <iostream>

using namespace std;

int main()
{
    int aktualnie_wczytana;
    int poprzednia;
    int krok=0;

    while(true)
    {
        krok++;
        cin >> aktualnie_wczytana;
        cout << aktualnie_wczytana << endl;
        if(poprzednia==aktualnie_wczytana)
        {
            cout << "KONIEC ZABAWY" << endl;
            break;
        }
        poprzednia=aktualnie_wczytana;
    }
    return 0;
}

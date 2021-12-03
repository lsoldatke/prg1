#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj cyfre 2-5" << endl;
    cin >> x;
    switch (x)
    {
        case 2:
            cout << "niedostateczny" << endl;
        break;
        case 3:
            cout << "dostateczny" << endl;
        break;
        case 4:
            cout << "dobry" << endl;
        break;
        case 5:
            cout << "bardzo dobry" << endl;
        break;
        default:
            cout << "Podaj poprawna cyfre 2-5" << endl;
        break;
    }
    return 0;
}

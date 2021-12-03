#include <iostream>

using namespace std;

int main()
{
    char znak = '#';
    int s;
    int w;
    cout << "Podaj szerokosc: ";
    cin >> s;
    cout << "Podaj wysokosc: ";
    cin >> w;
    for (int i=0; i<w; i++)
    {
        for (int j=0; j<s; j++)
        {
            cout << znak;
        }
        cout << endl;
    }
    return 0;
}

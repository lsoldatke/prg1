#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj punkty:" << endl;
    cin >> x;
    if(x>=0 && x<=49)
    {
        cout << "stopien: 2" << endl;
    }
    if(x>=50 && x<=59)
    {
        cout << "stopien: 3" << endl;
    }
    if(x>=60 && x<=69)
    {
        cout << "stopien: 3.5" << endl;
    }
    if(x>=70 && x<=79)
    {
        cout << "stopien: 4" << endl;
    }
    if(x>=80 && x<=89)
    {
        cout << "stopien: 4.5" << endl;
    }
    if(x>=90 && x<=100)
    {
        cout << "stopien: 5" << endl;
    }
    if(x<0 || x>100)
    {
        cout << "Podaj poprawna liczbe punktow z zakresu 0-100" << endl;
    }
    return 0;
}

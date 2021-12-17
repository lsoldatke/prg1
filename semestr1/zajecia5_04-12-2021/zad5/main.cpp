#include <iostream>

using namespace std;

int sil_rek(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*sil_rek(n-1);
    }
}

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    cout << endl;
    sil_rek(n);
    cout << n << "!=" << sil_rek(n) << endl;
    return 0;
}

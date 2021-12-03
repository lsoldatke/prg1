#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>A(10,0);
    int n;
    cout << "Ilosc zmiennych: ";
    cin >> n;
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        int x;
        cout << "Podaj " << i << ". element: ";
        cin >> x;
        A.insert(A.begin(),x);
    }
    cout << endl;
    cout << "Wpisane do wektora elementy:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << A.at(i);
        if(i<n-1)
        {
            cout << ",";
        }
    }
    cout << endl;
    return 0;
}

/* Gdy uzytkownik bedzie chcial wpisac 20 liczb, wektor zostanie powiekszony o 10 dodatkowych wartosci
i podane przez uzytkownika liczby zostana wpisane do tego wektora. Jezeli bedzie chcial wpisac 5, wtedy
5 wartosci zostanie wpisanych do wektora a 5 pozostanie zerami. */

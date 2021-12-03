#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rozmiar;
    cout << "Jaki ma byc rozmiar wektora: ";
    cin >> rozmiar;
    cout << endl;
    vector<int>A(rozmiar);
    int start;
    cout << "Podaj wartosc startowa: ";
    cin >> start;
    for(int i=0; i<rozmiar; i++)
    {
        A.insert(A.begin()+i,start+i);
    }
    cout << endl;
    cout << "Elementy wektora: " << endl;
    for(int i=0; i<rozmiar; i++)
    {
        cout << A.at(i);
        if(i<rozmiar-1)
        {
            cout << ",";
        }
    }
    cout << endl;
    return 0;
}

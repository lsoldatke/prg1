#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Ile liczb chcesz wprowadzic: ";
    cin >> n;
    cout << endl;
    vector<int>V(n);
    while(true)
    {
        int i;
        i++;
        int x;
        cout << "Podaj " << i << " element: ";
        cin >> x;
        if(x==0)
        {
            break;
        }
        else
        {
            V.insert(V.begin(),x);
        }
    }
    cout << endl;
    cout << "Podane liczby: " << endl;
    cout << endl;
    for(int i=0; i<=n; i++)
    {
        cout << V.at(i);
        if(i<=n)
        {
            cout << ",";
        }
        if(i%5==0)
        {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}

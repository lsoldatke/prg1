#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Podaj x:" << endl;
    cin >> x;
    if(x<=0)
    {
        cout << "f(x)=";
        cout << 1/(pow(x,2)+1) << endl;
    }
    if(x>0)
    {
        cout << "f(x)=";
        cout << log(x) << endl;
    }
    return 0;
}

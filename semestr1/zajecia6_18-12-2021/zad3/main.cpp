#include <iostream>

using namespace std;

swap(int * p1, int * p2)
{
    int tmp = 0;
    tmp = * p1;
    * p1 = * p2;
    * p2 = tmp;
}

int main()
{
    int integer1 = 10, integer2 = 15;
    int * pointer1, * pointer2;
    pointer1 = &integer1;
    pointer2 = &integer2;

    cout << "Wartosci przed zamiana:" << endl;
    cout << "integer1 = " << integer1 << " " << "integer2 = " << integer2 << endl;

    cout << endl;

    swap(pointer1,pointer2);

    cout << "Wartosci po zamianie:" << endl;
    cout << "integer1 = " << integer1 << " " << "integer2 = " << integer2 << endl;

    return 0;
}

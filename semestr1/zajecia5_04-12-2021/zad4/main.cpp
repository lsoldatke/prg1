#include <iostream>
#include <math.h> //Zawiera M_PI, sqrt(), cbrt()

using namespace std;

void cone(float h, float r, float &obj, float &pp)
{
    obj=(M_PI*cbrt(r)*h)/3;
    pp=M_PI*sqrt(r);
}

int main()
{
    float h, r, obj, pp;
    cout << "Podaj wysokosc stozka (h): ";
    cin >> h;
    cout << "Podaj promien stozka (r): ";
    cin >> r;
    cout << endl;
    cone(h,r,obj,pp);
    cout << "Objetosc stozka=" << obj << endl;
    cout << "Pole podstawy stozka=" << pp << endl;
    return 0;
}

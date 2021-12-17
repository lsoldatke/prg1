#include <iostream>
#include <math.h> //Zawiera sqrt

using namespace std;

bool triangle(float a, float b, float c, float &pole)
{
    if(a>0 && b>0 && c>0)
    {
        float p=(a+b+c)/2; //Polowa obwodu trojkata
        pole=sqrt(p*(p-a)*(p-b)*(p-c)); //Wzor herona
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    float a, b, c, pole;
    cout << "Podaj bok a: ";
    cin >> a;
    cout << "Podaj bok b: ";
    cin >> b;
    cout << "Podaj bok c: ";
    cin >> c;
    cout << endl;
    triangle(a,b,c,pole);
    if(triangle(a,b,c,pole)==true)
    {
        cout << "Pole: " << pole << endl;
    }
    else
    {
        cout << "Dlugosc boku lub bokow trojkata mniejsza lub rowna 0. Nie mozna policzyc pola trojkata." << endl;
    }
    return 0;
}

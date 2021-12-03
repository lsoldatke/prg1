#include <iostream>

using namespace std;

int main()
{
    int n_while=0, n_do_while=0, n_for=0;
    cout << "Podaj liczbe, ktorej obliczyc silnie: ";
    cin >> n_while;
    n_do_while=n_while;
    n_for=n_while;
    int s_while=1, s_do_while=1, s_for=1;
    int i_while=1, i_do_while=1;

    if (n_while==0 && n_do_while==0 && n_for==0)
    {
        cout << n_while <<"!=" << 1 << endl;
    }
    else
    {
        while(i_while<=n_while)
        {
            s_while*=i_while;
            i_while++;
        }
        cout << "WHILE -> " << n_while << "!=" << s_while << endl;

        do
        {
            s_do_while*=i_do_while;
            i_do_while++;
        }while(i_do_while<=n_do_while);
        cout << "DO-WHILE -> " << n_do_while << "!=" << s_do_while << endl;

        for(int i_for=n_for; i_for>1; i_for--)
        {
            s_for=s_for*i_for;
        }
        cout << "FOR -> " << n_for << "!=" << s_for << endl;
    }

    return 0;
}

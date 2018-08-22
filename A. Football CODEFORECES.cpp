#include<iostream>
#include<string>
using namespace std;

int main()
{
    string p;
    int a = 0, b = 0;

    cin >> p;

    for(int i = 0; i < p.size(); i++)
    {
        if(p[i] == '1')
        {
            a++;
        }

        if(p[i] == '0')
        {
            b++;
            a = 0;
        }

    }

    if(a >= 7 || b >= 7)
    {
        cout << "YES" << endl;
    }

    else
        cout << "NO" << endl;

    return 0;


}

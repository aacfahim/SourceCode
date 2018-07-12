#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,x;


    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i%2==0)
           {
               x = pow(i,2);
            cout << i <<  "^2 = " << x << endl;
           }

    }


    return 0;

}

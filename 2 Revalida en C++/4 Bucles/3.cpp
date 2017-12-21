///otro programa para halla el maximo comun divisor
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"ingrese b:";
    cin>>b;
    while (a%b!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
    cout<<"El maximo divisor es ="<<b;
    return 0;
}

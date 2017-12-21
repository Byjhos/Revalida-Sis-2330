///programa para determinar el valor absoluto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,valor;
    cout<<"ingrese un numero:";
    cin>>a;
    if (a>0)
    {
        valor=a;
    }
    else
    {
        valor=-a;
    }
    cout<<"el valor absoluto es ="<<a;
    return 0;
}



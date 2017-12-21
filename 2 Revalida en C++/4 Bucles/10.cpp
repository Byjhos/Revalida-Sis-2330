///programa para Evaluar 2^n
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int suma=1;
    cout<<"ingrese un numero:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        suma=2*suma;
    }
    cout<<"la suma es ="<<suma;
    return 0;
}

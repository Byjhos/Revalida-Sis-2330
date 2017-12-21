///algoritmo ruso de multiplicacion
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,a;
    int suma=0;
    cout<<"ingrese un numero:";
    cin>>n;
    while (b>0)
        {
            if (b%2==0)
            {
                suma=suma+a;
            }
            a=2*a;
            b=b/2;
        }
    cout<<"La suma es ="<<suma;
    return 0;
}

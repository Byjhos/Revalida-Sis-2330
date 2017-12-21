///la suma de n primeros numeros enteros al cuadrado
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int suma=0;
    cout<<"ingrese un numero:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        suma=suma+i*i;
    }
    cout<<"la suma es ="<<suma;
    return 0;
}


///cuadrado de un numero entero n
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int suma=0;
    int i=0;
    cout<<"ingrese un numero:";
    cin>>n;
    while (i<=n)
	{
	    suma=suma+(2*i-1);
        i=i+1;
	}
	cout<<"El cuadrado del numero es ="<<suma;
    return 0;
}

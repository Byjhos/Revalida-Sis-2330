///Programa para evaluar una funcion
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"ingrese un numero";
    cin>>x;
    if (x!=3)
    {
        y=pow(x,5)/(x-3);
	cout<<"El resultado es="<<y;
    }
    else
    {
        cout<<"no se puede calcular";
    }
    return 0;
}

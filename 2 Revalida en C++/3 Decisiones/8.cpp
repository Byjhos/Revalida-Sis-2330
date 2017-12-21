///Encontar el signo el entero y la fraccion
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numeros,magnitud,entero,fraccion;
    char signo;
    cout<<"Ingrese un numero";
    cin>>numeros;
    if (numeros>0)
        signo='+';
    else
        if (numeros==0)
            signo=' ';
    else
        signo='+';
    magnitud=numeros;
    entero=magnitud;
    fraccion=magnitud-entero;
    cout<<"signo="<<signo<<endl;
    cout<<"entero="<<entero<<endl;
    cout<<"fraccion="<<fraccion<<endl;
    return 0;
}


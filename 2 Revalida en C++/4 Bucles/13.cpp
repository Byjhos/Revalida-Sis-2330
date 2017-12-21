/**la suma de cuadrados de los lados de un triangulo rectangulo
que es = al cuadrado de la hipotenusa calcuar los numeros pitagoricos
menores o iguales que 100**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,h;
    for(int n=1;n<=99;n++)
    {
        for(int m=n+1;m<=100;m++)
        {
            a=m*m-n*n;
            b=2*m*n;
            h=m*m+n*n;
            if(h<=100)
                cout<<"los numeros pitagoricos son = "<<a<<b<<h<<endl;
        }
    }
    return 0;
}

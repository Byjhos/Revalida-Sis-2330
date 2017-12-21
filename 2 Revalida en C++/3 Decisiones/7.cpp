///para saber si tres lados formanun triangulo
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s;
    cout<<"Ingrese a:";
    cin>>a;
    cout<<"Ingrese b:";
    cin>>b;
    cout<<"Ingrese c:";
    cin>>c;
    int max;
    int min;
    if (a>b)
       max=a;
    else
        max=b;
    if (max<c)
        max=c;
    s=(a+b+c)/2;
    if (s>max)
        cout<<"forman triangulo";
    else
        cout<<"no forman triangulo";
    return 0;
}

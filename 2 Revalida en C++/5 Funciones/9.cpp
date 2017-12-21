///funcion para hallar la raiz cubica de un numero aplicando la  ley de newton
#include <bits/stdc++.h>
using namespace std;
int cubic(int a)
{

    int x1=1;
    int x;
    do
    {
        x=x1;
        x1=(2*x+a/x*x)/3;
    }
    while((x-x1)>=false);
    return x1;
}
int main()
{
    int a;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"la raiz cubica es = "<<cubic(a);
    return 0;
}

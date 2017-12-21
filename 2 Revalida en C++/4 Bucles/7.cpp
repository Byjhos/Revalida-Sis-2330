///raiz cuadrada de un numero n
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cout<<"ingrese un numero:";
    cin>>n;
    float x1=1;
    do
    {
        x=x1;
        x1=(0.5*(x+(n/x)));
    }
    while ((x-x1)<=false);
    cout<<"la raiz del numero es ="<<x1;
    return 0;
}


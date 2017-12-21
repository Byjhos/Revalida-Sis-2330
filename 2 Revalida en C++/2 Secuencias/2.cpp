///Residuo de a con b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    float r;
    cout<<"Ingrese a:";
    cin>>a;
    cout<<"Ingrese b:";
    cin>>b;
    r=a-(a/b)*b;
    cout<<"El resultado es ="<<r;
    return 0;
}

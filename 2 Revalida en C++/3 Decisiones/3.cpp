///programa para probar si un caracter es digito
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cout<<"ingrtese un numero";
    cin>>c;
    if(c>=0&&c<=9)
    {
        cout<<"Es digito";
    }
    else
    {
        cout<<"No es digito";
    }
    return 0;
}

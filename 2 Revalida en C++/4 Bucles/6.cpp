///Serie de taylor
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int suma=1;
    int i=1;
    int t=1;
    cout<<"ingrese x:";
    cin>>x;
    while ((i<=15) || (t>false))
    {
        t=t*x/i;
        suma=suma+1;
        i=i+1;
    }
    cout<<"la suma es = "<<suma;
    return 0;
}

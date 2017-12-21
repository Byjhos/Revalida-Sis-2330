///programa para el coeficiente bimodal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,coef;
    int y=1;
    int x=1;
    cout<<"ingrese n:";
    cin>>n;
    cout<<"ingrese m:";
    cin>>m;
    for(int i=1;i<m;i++)
    {
        x=x*(n+1-i);
        y=y*i;
    }
    coef=x/y;
    cout<<"El coeficiente es ="<<coef;
    return 0;
}

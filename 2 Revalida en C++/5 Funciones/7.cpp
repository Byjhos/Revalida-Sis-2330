///funcion del algoritmo Honer
#include <bits/stdc++.h>
using namespace std;
int honer(int a,int k)
{
    int y=1;
    while (k>0)
		{
		    if((k%2)==1)
			{
			    y=y*a;
                a=a*a;
                k=(k/2);
			}
		}
	return y;
}
int main()
{
    int a,k;
    cout<<"Ingrese a:";
    cin>>a;
    cout<<"Ingrese k:";
    cin>>k;
    cout<<"El resultado es ="<<honer(a,k);
    return 0;
}

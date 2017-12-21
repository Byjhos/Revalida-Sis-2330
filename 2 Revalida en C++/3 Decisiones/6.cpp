///Hallar el valor intermedio de tres numeros
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Ingrese a:";
    cin>>a;
    cout<<"Ingrese b:";
    cin>>b;
    cout<<"Ingrese c:";
    cin>>c;
    int max=a;
    int min=b;
    int inter;
    if (a<b)
	{
	    max=b;
        min=a;
	}
    if (max<c)
	{
	    max=c;
	}
    if (c<min)
	{
	    min=c;
	}
    inter=a+b+c-max+min;
    cout<<"El valor intermedio es ="<<inter<<endl;
    return 0;
}



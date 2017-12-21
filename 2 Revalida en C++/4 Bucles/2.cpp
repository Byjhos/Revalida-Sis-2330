///Encontrar el maximo divisor
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"ingrese b:";
    cin>>b;
    while (a!=b)
	{
	    if (a>b)
            a=a-b;
        else
            b=b-a;
	}
    cout<<"El maximo divisor es ="<<b;
    return 0;
}



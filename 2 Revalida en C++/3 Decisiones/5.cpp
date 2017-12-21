#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    float disc,x1,x2,y1,y2;
    cout<<"Ingrese a:";
    cin>>a;
    cout<<"Ingrese b:";
    cin>>b;
    cout<<"Ingrese c:";
    cin>>c;
    disc=(b*b)-4*a*c;
    if (disc>0)
	{
	    x1=(-b+sqrt(disc))/2*a;
        x2=(-b-sqrt(disc))/2*a;
        y1=0;
        y2=0;
	}
    else
	{
	    x1=-b/2*a;
        x2=-b/2*a;
        y1=(sqrt(-disc))/2*a;
        y2=-(sqrt(-disc))/2*a;
	}
	cout<<"parte real="<<x1<<x2<<endl;
    cout<<"parte imaginaria="<<y1<<y2<<endl;
    return 0;
}



/**#funcion para en contrar el area bajo una curva
f(x)=x^2senx f(a)=0 f(b)=3.14159**/
#include <bits/stdc++.h>
using namespace std;
float trap(float a,float b,float n)
{
    float h,x,t;
    h=(b-a)/n;
	float suma=0;
	for (int i=1;i<=n-1;i++)
		{
		    x=a+i*h;
            suma=suma+(pow(x,2)*(sin(x)));
		}
	t=0.5*h*(0+3.1415+2*suma);
	return t;
}
int main()
{
    int a,b,n;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"ingrese b:";
    cin>>b;
    cout<<"ingrese n:";
    cin>>n;
    cout<<"el resultado es ="<<trap(a,b,n);
    return 0;
}

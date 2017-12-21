///funcion para coordenadas polares
#include <bits/stdc++.h>
using namespace std;
void complejo(float a,float b,float n)
{
    float rho,ang,rhon,angn,an,bn;
    rho=sqrt(pow(a,2)+pow(b,2));
	ang=asin((b/rho));

	rhon=pow(rho,n);
	angn=n*ang;
	an=rhon*cos(angn);
	bn=rhon*sin(angn);

	cout<<"las coordenadas polares son ="<<an<<bn;
}
int main()
{
    float a,b,n;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"ingrese b:";
    cin>>b;
    cout<<"ingrese n:";
    cin>>n;
    complejo(a,b,n);
    return 0;
}

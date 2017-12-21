///funcion para resolver un acertijo
#include <bits/stdc++.h>
using namespace std;
int sociendad(int n1,int n2)
{
    int x,y,z;
    x=n1*2;
	x=x+5;
	y=x*50;
	y=y+n2;
	z=y+365;
	z=z-615;
	return z;
}
int main()
{
    int n1,n2;
    cout<<"ingrese n1:";
    cin>>n1;
    cout<<"ingrese n2:";
    cin>>n2;
    cout<<"El juego de la sociedad es= "<<sociendad(n1,n2);
    return 0;
}

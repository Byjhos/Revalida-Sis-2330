/**Funcion para evaluar la potencia de un numero a,
 a un exponete b, siendo b un numero entero**/
#include <bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int n=b;
	int producto=1;
	int i=1;
	while (i<=n)
		{
		    producto=producto*a;
            i=i+1;
		}
	if(b<0)
		{
		    producto=1/producto;
		}
	return producto;
}
int main()
{
    int a,b;
    cout<<"ingrese a:";
    cin>>a;
    cout<<"ingrese b:";
    cin>>b;
    cout<<"el resultado es = "<<power(a,b);
    return 0;
}

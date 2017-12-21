///funcion para saber si un numero es perfecto
#include <bits/stdc++.h>
using namespace std;
int es_perfecto(int n)
{
    int suma=0;
	for (int i=1;i<=n/2;i++)
    {
        if ((n%i)==0)
            suma=suma+i;
    }
	if (suma==n)
		return true;
	else
		return false;
}
int main()
{
    for(int n=1;n<=100;n++)
    {
        if(es_perfecto(n))
        {
            cout<<"los numeros perfectos son="<<n<<endl;
        }
    }
    return 0;
}

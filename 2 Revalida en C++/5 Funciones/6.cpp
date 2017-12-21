///funcion de la serie de fibonacci
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    int x;
    int y;
    int valor;
    if((n==0)||(n==1))
        {
		    return n;
		}
	else
        {
            x=0;
            y=1;
            for (int i=2;i<=n;i++)
                {
                    y=y+x;
                    x=y-x;
                }
            valor=y;
        }
    return valor;
}
int main()
{
    int n;
    cout<<"ingrese n:";
    cin>>n;
    cout<<"el numero de la serie de fiboacci es = "<<fibonacci(n)<<endl;
    return 0;
}

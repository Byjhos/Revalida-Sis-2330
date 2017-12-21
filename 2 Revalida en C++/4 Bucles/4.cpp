///comprobar si un numero n es primo
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"ingrese un numero:";
   cin>>n;
   int i=n/2;
   int flag=true;
   while ((i>1)&&(flag=true))
    {
        if ((n%i)==0)
        {
            flag=false;
        }
        i=i-1;
    }
    if (flag==true)
    {
        cout<<" es primo";
    }
    else
    {
        cout<<"no es primo";
    }
    return 0;
}

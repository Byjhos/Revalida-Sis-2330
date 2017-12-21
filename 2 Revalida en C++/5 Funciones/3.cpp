///funcion para saber que es bisiesto
#include <bits/stdc++.h>
using namespace std;
int es_bisiesto(int n)
{
    if((((n%4)==0)&&((n%100)!=0))||((n%400)==0))
		return true;
	else
		return false;
}
int main()
{
    for (int n=1;n<=3000;n++)
	{
	    if  (es_bisiesto(n))
		cout<<"los anios bisiestos"<<n<<endl;
	}
    return 0;
}

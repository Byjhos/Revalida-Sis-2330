///funcion para hallar l invversa de un numero tal como 1234
#include <bits/stdc++.h>
using namespace std;
int inversa(int n)
{
    int digito;
    int result=0;
    while(n>0)
		{
		    digito=(n%10);
            result=result*10+digito;
            n=(n/10);
		}
	return result;

}
int main()
{
    int n;
    cout<<"ingrese n:";
    cin>>n;
    cout<<"El numero iverso es = "<<inversa(n);
    return 0;
}

///funcion para clasificar la clase de barcos
#include <bits/stdc++.h>
using namespace std;
void clase(char c)
{
    if(c=='D'||c=='d')
		cout<<"Destructor";
    else if(c=='F'||c=='f')
		cout<<"Fragata";
    else if(c=='M'||c=='m')
		cout<<"Misilera";
    else if(c=='B'||c=='b')
		cout<<"Buque";
	else
		cout<<"No exixte esa clase de barco";
}
int main()
{
    char c;
    cout<<"ingrese un caracteren :";
    cin>>c;
    clase(c);
    return 0;
}

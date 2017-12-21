///funcion factorial
#include <bits/stdc++.h>
using namespace std;
float factorial(int n)
{
    int producto=1;
	for (int i=1;i<=n;i++)
		{
		    producto=producto*i;
		}
	return producto;

}
int main()
{
    int n;
    float f;
    cout<<"ingrese n:";
    cin>>n;
    f=factorial(n);
    cout<<"el facotrial de n = "<<f<<endl;
    return 0;
}

///Calcular la cantidad de kilometros en una determinada longitud
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int millas,kms;
    int kms1=1609;
    cout<<"ingrese un numero: ";
    cin>>millas;
    kms=kms1*millas;
    cout<<"El numero en kilometros es="<<kms;

    return 0;
}

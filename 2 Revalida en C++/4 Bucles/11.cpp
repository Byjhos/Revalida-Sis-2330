///para calcular la planilla de una empresa
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total=0;
    int contador=0;
    int numero;
    cout<<"ingrese un numero de planilla:";
    cin>>numero;
    while (contador<numero)
	{
	    int horas,salario,pago;
        cout<<"ingrese horas:";cin>>horas;
        cout<<"ingrese salario:";cin>>salario;
        pago=horas*salario;
        total=total+pago;
        contador=contador+1;
        cout<<"el pago es = "<<pago<<endl;
	}
    cout<<"Total es ="<<total;
    return 0;
}

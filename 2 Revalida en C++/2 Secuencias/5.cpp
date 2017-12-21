///calcular el tercer lado de un triangulo
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float b,c;
    float alpha,ang,a;
    cout<<"Ingrese b:";
    cin>>b;
    cout<<"Ingrese c:";
    cin>>c;
    cout<<"Ingrese alpha:";
    cin>>alpha;
    ang=alpha*3.14159/180;
    a=sqrt((b*b)+(c*c)-2*b*c*(cos(ang)));
    cout<<"el resultado es="<<a;
    return 0;
}

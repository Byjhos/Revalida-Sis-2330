///funcion para evaluar el area
#include <bits/stdc++.h>
using namespace std;
float area(int radio)
{
    float a;
    a=3.14150*(radio*radio);
    return a;
}
int main()
{
    float r1,r2;
    float ass;
    cout<<"ingrese r1:";
    cin>>r1;
    cout<<"ingrese r2:";
    cin>>r2;
    ass=area(r2)-area(r1);
    cout<<"el area de un anillo es ="<<ass;
    return 0;
}

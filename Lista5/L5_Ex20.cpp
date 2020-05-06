#include <iostream>
#include <math.h>
using namespace std;
void verifica(float a, float b)
{
    cout<<"Vel Media: "<<a/b<<"km/h";
}
main()
{
    float km, t;
    cout<<"KM percorrido: ";
    cin>>km;
    cout<<"Tempo em Horas: ";
    cin>>t;
    verifica(km, t);
}

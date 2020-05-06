#include <iostream>
using namespace std;
float verifica(float x, float y)
{
    cout<<"Area Triangulo: "<<((x*y)/2);
}
main()
{
    float b, h;
    cout<<"Base: ";
    cin>>b;
    cout<<"Altura: ";
    cin>>h;
    verifica(b, h);
}

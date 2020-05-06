#include <iostream>
using namespace std;
float verifica(float x, float y)
{
    float a;
    a=((x*y)/2);
    return a;
}
main()
{
    float b, h, r;
    cout<<"Base: ";
    cin>>b;
    cout<<"Altura: ";
    cin>>h;
    r=verifica(b, h);
    cout<<"Area: "<<r;
}

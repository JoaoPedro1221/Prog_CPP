#include <iostream>
using namespace std;
float verifica()
{
    int b, h, a;
    cout<<"Base: ";
    cin>>b;
    cout<<"Altura: ";
    cin>>h;
    a=((b*h)/2);
    return a;
}
main()
{
    float r;
    r=verifica();
    cout<<"Area: "<<r;
}

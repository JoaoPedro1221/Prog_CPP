#include <iostream>
#include <math.h>
using namespace std;
void verifica(float a)
{
    cout<<"Area e: "<<(M_PI*pow(a, 2));
}
main()
{
    float r;
    cout<<"Raio: ";
    cin>>r;
    verifica(r);
}

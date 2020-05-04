#include <iostream>
using namespace std;
void verifica (float n1, float n2, float n3, char x)
{
        if (x=='a' || x=='A')
        {
        cout<<" Media e: "<<((n1+n2+n3)/3);
        }
        else if (x=='p' || x=='P')
        {
        cout<<" Media e: "<<(((n1*5)+(n2*3)+(n3*2))/10);
        }
}
main()
{
    float n1, n2, n3;
    char x;
    cout<<"Digite a nota 1: ";
    cin>>n1;
    cout<<"Digite a nota 2: ";
    cin>>n2;
    cout<<"Digite a nota 3: ";
    cin>>n3;
    cout<<"Digite 'A' para Media Aritmetica e 'P' para Media Ponderada: ";
    cin>>x;
    verifica(n1, n2, n3, x);
}

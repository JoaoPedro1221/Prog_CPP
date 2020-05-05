#include <iostream>
using namespace std;
float verifica ()
{
    float n1, n2, n3, imp;
    char x;
    cout<<"Digite a nota 1: ";
    cin>>n1;
    cout<<"Digite a nota 2: ";
    cin>>n2;
    cout<<"Digite a nota 3: ";
    cin>>n3;
    cout<<"Digite 'A' para Media Aritmetica e 'P' para Media Ponderada: ";
    cin>>x;

        if (x=='a' || x=='A')
        {
        imp=((n1+n2+n3)/3);
        }
        else if (x=='p' || x=='P')
        {
        imp=(((n1*5)+(n2*3)+(n3*2))/10);
        }
        return imp;
}
main()
{
    float impr;
    impr = verifica();
    cout<<"Media :"<<impr;
}

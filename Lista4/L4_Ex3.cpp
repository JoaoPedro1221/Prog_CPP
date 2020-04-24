#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float cod;
    cout<<"Qual o codigo do produto? ";
    cin>>cod;

    if (cod==1)
    {
        cout<<"Alimento nao-perecivel";
    }
    else if (cod>=2 && cod<=4)
    {
    cout<<"Alimento perecivel";
    }
    else if (cod>=5 && cod<=6)
    {
        cout<<"Vestuario";
    }
    else if (cod==7)
    {
    cout<<"Higiene Pessoal";
    }
    else if (cod>=8 && cod<=15)
    {
    cout<<"Limpeza e utensilios domesticos";
    }
    else
    cout<<"Invalido";

    return 0;
}


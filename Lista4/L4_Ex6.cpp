#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float v1, v2;
    char op;
    cout<<"Digite o valor 1"<<endl;
    cin>>v1;
    cout<<"Digite o valor 2"<<endl;
    cin>>v2;
    cout<<"Digite o simbolo da operacao: + ou - ou * ou /"<<endl;
    cin>>op;

    system("cls");

    if (op=='+')
    {
        cout<<(v1+v2);
    }
    else if (op=='-')
    {
        cout<<(v1-v2);
    }
    else if (op=='*')
    {
        cout<<(v1*v2);
    }
    else if (op=='/')
    {
        cout<<(v1/v2);
    }
    else
    {
        cout<<"Operacao incorreta!";
    }
    return 0;
}



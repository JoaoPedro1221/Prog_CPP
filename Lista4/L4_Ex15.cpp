#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float cod, sal;
    cout<<"Qual o seu cargo?"<<endl;
    cout<<"1 - Escrituario"<<endl;
    cout<<"2 - Secretario"<<endl;
    cout<<"3 - Caixa"<<endl;
    cout<<"4 - Gerente"<<endl;
    cout<<"5 - Diretor"<<endl;
    cin>>cod;
    cout<<"Qual o seu salario?"<<endl;
    cin>>sal;

    system("cls");

    if (cod==1)
    {
        cout<<"1 - Escrituario"<<endl;
        cout<<"Seu salario vai aumentar em 50%, sendo o novo valor de R$"<<sal*1.5;
    }
    else if (cod==2)
    {
        cout<<"2 - Secretario"<<endl;
        cout<<"Seu salario vai aumentar em 35%, sendo o novo valor de R$"<<sal*1.35;
    }
    else if (cod==3)
    {
        cout<<"3 - Caixa"<<endl;
        cout<<"Seu salario vai aumentar em 20%, sendo o novo valor de R$"<<sal*1.20;
    }
    else if (cod==4)
    {
        cout<<"4 - Gerente"<<endl;
        cout<<"Seu salario vai aumentar em 10%, sendo o novo valor de R$"<<sal*1.10;
    }
    else if (cod==5)
    {
        cout<<"5 - Diretor"<<endl;
        cout<<"Seu salario nao tera aumento! Continua sendo o valor de R$"<<sal;
    }
    else
    {
        cout<<"Opcao Invalida";
    }
    return 0;
}

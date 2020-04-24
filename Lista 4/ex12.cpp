#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float op, num1, num2;
    cout<<"1 - Media entre os dois numeros: "<<endl;
    cout<<"2 - Diferenca entre dois numeros"<<endl;
    cout<<"3 - Produto entre dois numetos"<<endl;
    cout<<"Qual a opcao desejada? "<<endl;
    cin>>op;
    cout<<"Digite o primeiro numero: "<<endl;
    cin>>num1;
    cout<<"Digite o segundo numero: "<<endl;
    cin>>num2;

    system("cls");

    if (op==1)
    {
        cout<<((num1+num2)/2);
    }
    else if (op==2)
    {
        cout<<(num1-num2);
    }
    else if (op==3)
    {
        cout<<num1*num2;
    }
    else
    {
        cout<<"Opcao Invalida";
    }
    return 0;
}






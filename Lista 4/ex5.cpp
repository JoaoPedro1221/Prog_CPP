#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float cod, prod;
    cout<< "Cod 1 - Pagamento a vista dinheiro ou cheque! 10% de desconto"<<endl;
    cout<< "Cod 2 - Pagamento a vista no cartao! 05% de desconto"<<endl;
    cout<< "Cod 3 - Pagamento em duas vezes"<<endl;
    cout<< "Cod 4 - Pagamento em tres vezes (juros 10%)"<<endl;
    cout<<"Qual o codigo do seu pagamento? ";
    cin>>cod;
    cout<<"Qual o valor do produto? ";
    cin>>prod;

    system("cls");

    if (cod==1)
    {
        cout<<"Voce escolheu: Pagamento a vista dinheiro ou cheque! 10% de desconto, valor final :"<<prod*0.9;
    }
    else if (cod==2)
    {
        cout<<"Voce escolheu: Pagamento a vista no cartao! 05% de desconto, valor final :"<<prod*0.95;;
    }
    else if (cod==3)
    {
        cout<<"Voce escolheu: Pagamento em duas vezes, preço do produto: "<<prod;
    }
    else if (cod==4)
    {
        cout<<"Voce escolheu: Pagamento em tres vezes, preço do produto c/ juros: "<<prod*1.1;
    }
    else
    {
        cout<<"Codigo incorreto";
    }
    return 0;
}



#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float cod, peso, imp, y, preco;
    cout<<"Qual o codigo do produto?"<<endl;
    cin>>cod;
    cout<<"Qual o peso do produto? "<<endl;
    cin>>peso;
    cout<<"Qual o codigo do pais de origem? "<<endl;
    cin>>imp;

    system("cls");

    cout<<"O peso do produto e "<<peso*1000<<" gramas"<<endl;

        if (cod>=1 && cod<=4)
    {
        preco = ((peso*1000)*10);
        cout<<"O preco total do produto vai ser R$"<<preco<<endl;
    }
        else if (cod>=5 && cod<=7)
    {
        preco = (peso*1000)*25;
        cout<<"O preco total do produto vai ser R$"<<preco<<endl;
    }
        else if (cod>=8 && cod<=10)
    {
        preco = (peso*1000)*35;
        cout<<"O preco total do produto vai ser R$"<<preco<<endl;
    }
        else
    {
        cout<<"Codigo incorreto! Tente Novamente!"<<endl;
        return 0;
    }
        if (imp==1)
    {
        y=0;
        cout<<"O seu imposto vai ser de 0%, preco do imposto: R$0"<<endl;
    }
        else if (imp==2)
    {
        y = preco*0.15;
        cout<<"O seu imposto vai ser de 15%, preco do imposto: R$"<<y<<endl;
    }
        else if (imp==3)
    {
        y = preco*0.25;
        cout<<"O seu imposto vai ser de 25%, preco do imposto: R$"<<y<<endl;
    }
        else
    {
        cout<<"Codigo incorreto! Tente Novamente!"<<endl;
        return 0;
    }

    cout<<"O valor total do produto vai ser: R$"<<(preco)+(y)<<endl;

    return 0;
}

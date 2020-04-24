#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int nasc, ano, calc;
    cout<<"Insira seu ano de nascimento: "<<endl;
    cin>>nasc;
    cout<<"Insira o ano atual: "<<endl;
    cin>>ano;

    system("cls");

    calc = ano-nasc;

    cout<<calc<<endl;

    if (calc<16)
    {
        cout<<"Voce ainda nao pode votar!";
    }
    if (calc>=18 && calc<65)
    {
        cout<<"Voce e obrigado a votar!";
    }
    if (calc>=16 && calc<18 || calc>=65)
    {
        cout<<"Voce nao e obrigado a votar, mas se quiser pode!";
    }
    return 0;
}




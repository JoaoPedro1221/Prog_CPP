#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float peso, alt, imc;
    cout<<"Qual o seu peso? "<<endl;
    cin>>peso;
    cout<<"Qual o sua altura? "<<endl;
    cin>>alt;

    system("cls");

    imc = peso / (pow(alt, 2));

    if (imc <= 18.5)
    {
        cout<<"Você está com seu IMC em "<<imc<<" voce esta ABAIXO DO PESO!";
    }
    else if (imc>18.5 && imc<=25)
    {
        cout<<"Você está com seu IMC em "<<imc<<" voce esta com PESO NORMAL!";
    }
    else if (imc>25 && imc<=30)
    {
        cout<<"Você está com seu IMC em "<<imc<<" voce esta ACIMA DO PESO!";
    }
    else if (imc>30)
    {
        cout<<"Você está com seu IMC em "<<imc<<" voce esta OBESO!";
    }

    return 0;
}



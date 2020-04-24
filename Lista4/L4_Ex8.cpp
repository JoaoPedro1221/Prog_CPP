#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float m;
    cout<<"Insira o numero do mes? "<<endl;
    cin>>m;

    system("cls");

    if (m==1)
    {
        cout<<"Janeiro";
    }
    else if (m==2)
    {
        cout<<"Fevereiro";
    }
    else if (m==3)
    {
        cout<<"Marco";
    }
    else if (m==4)
    {
        cout<<"Abril";
    }
    else if (m==5)
    {
        cout<<"Maio";
    }
    else if (m==6)
    {
        cout<<"Junho";
    }
    else if (m==7)
    {
        cout<<"Julho";
    }
    else if (m==8)
    {
        cout<<"Agosto";
    }
    else if (m==9)
    {
        cout<<"Setembro";
    }
    else if (m==10)
    {
        cout<<"Outubro";
    }
    else if (m==11)
    {
        cout<<"Novembro";
    }
    else if (m==12)
    {
        cout<<"Dezembro";
    }
    else
    {
        cout<<"Invalido";
    }
    return 0;
}

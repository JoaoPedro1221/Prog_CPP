#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float idade;
    cout<<"Qual a idade? ";
    cin>>idade;

    if (idade<5)
    {
        cout<<"Idade insuficiente";
    }
    else if (idade>=5 && idade<=7)
    {
    cout<<"Infantil A";
    }
    else if (idade>=8 && idade<=10)
    {
        cout<<"Infantil B";
    }
    else if (idade>=11 && idade<=13)
    {
    cout<<"Juvenil A";
    }
    else if (idade>=14 && idade<=17)
    {
    cout<<"Juvenil B";
    }
    else
    cout<<"Adulto";

    return 0;
}


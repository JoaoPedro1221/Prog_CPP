#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float id;
    cout<<"Insira sua idade? "<<endl;
    cin>>id;

    system("cls");

    if (id<16)
    {
        cout<<"Voce ainda nao pode votar!";
    }
    else if (id>=18 && id<65)
    {
        cout<<"Voce e obrigado a votar!";
    }
    else if ((id>=16 && id<18) || id>=65)
    {
        cout<<"Voce nao e obrigado a votar, mas se quiser pode!";
    }
    return 0;
}




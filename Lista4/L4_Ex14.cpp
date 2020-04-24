#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float id;
    cout<<"Qual a sua idade? "<<endl;
    cin>>id;

    system("cls");

    if (id<18)
    {
        cout<<"Voce ainda nao e maior de idade!";
    }
    else
    {
        cout<<"Voce e maior de idade!";
    }
    return 0;
}






#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float sal;
    cout<<"Digite o valor do seu salario: "<<endl;
    cin>>sal;

    system("cls");

    if (sal<=500)
    {
        cout<<"Voce tem direito a aumento! Seu novo salario vai ser: "<< sal*1.3;
    }
    else
    {
        cout<<"Voce nao tem direito a aumento!";
    }
    return 0;
}

// Identifica a partir da idade se uma pessoa pode votar ou não, utilizando IF/ELSE

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
float idade;
cout<<"Qual a sua idade?";
cin>>idade;

if (idade>=16 && idade<18)
{
    cout<<"Voce pode votar! Mas ainda nao pode dirigir";
}
else
    if (idade>=18)
{
    cout<<"Voce ja pode votar e dirigir!";
}
else
    cout<<"Voce ainda nao pode votar e dirigir! Espere mais um pouco!";

    return 0;
}

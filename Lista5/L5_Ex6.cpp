#include <iostream>
using namespace std;
float verifica(float x, float y)

{
    cout<<"Porcentagem de aumento: "<<(((y/x)-1)*100)<<"%";
}

main()

{
    float a, b;
    cout<<"Digite o valor antigo: ";
    cin>>a;
    cout<<"Digite o valor atual: ";
    cin>>b;
    verifica(a, b);
}

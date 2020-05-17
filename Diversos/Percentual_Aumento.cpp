//Verifica percentual de aumento de um número

#include <iostream>
using namespace std;
float verifica()

{
float	a, b;
    cout<<"Digite o valor antigo: ";
    cin>>a;
    cout<<"Digite o valor atual: ";
    cin>>b;
    cout<<"Porcentagem de aumento: "<<(((b/a)-1)*100)<<"%";
}

main()

{
    verifica();
}

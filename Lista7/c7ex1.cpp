#include<iostream>
using namespace std;

main()

{
    int vet[6], qtdP=0, qtdI=0, i;

    for (i=0; i<6; i++)
    {
        cout<<"Vet: ";
        cin>>vet[i];

        if (vet[i]%2==0)
            qtdP++;
        else
            qtdI++;
    }
    cout<<"Quantidade de Pares: "<<qtdP<<endl;

    for (i=0; i<6; i++)
    {
        if (vet[i]%2==0)
            cout<<vet[i]<<endl;
    }

    cout<<"Quantidade de Impares: "<<qtdI<<endl;

    for (i=0; i<6; i++)
    {
        if (vet[i]%2!=0)
            cout<<vet[i]<<endl;
    }
}

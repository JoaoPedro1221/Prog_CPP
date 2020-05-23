#include<iostream>
using namespace std;

main()

{
    float vet[10], somaP=0;
    int i, qtdN=0, qtdP=0;

    for (i=0; i<10; i++)
    {
        cout<<"Vet: ";
        cin>>vet[i];

        if (vet[i]>=0)
            qtdP++;
        else
            qtdN++;
    }
    cout<<endl<<"Quantidade de Positivos: "<<qtdP<<endl;

    for (i=0; i<10; i++)
    {
        if (vet[i]>=0)
            cout<<vet[i]<<endl;
    }

    cout<<endl<<"Quantidade de Negativo: "<<qtdN<<endl;

    for (i=0; i<10; i++)
    {
        if (vet[i]<0)
            cout<<vet[i]<<endl;
    }
}

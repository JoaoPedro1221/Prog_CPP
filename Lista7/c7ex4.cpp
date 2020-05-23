#include<iostream>
using namespace std;

main()

{
    float vet[5], maior, menor, pma=0, pme=0;
    int i;
    cout<<"Vet: ";
    cin>>vet[0];
    maior=vet[0];
    menor=vet[0];


    for (i=1; i<5; i++)

    {
        cout<<"Vet: ";
        cin>>vet[i];
    }

    for (i=0; i<5; i++)
    {
        if (maior<vet[i])
           {
            maior=vet[i];
            pma=i;
           }


        if (menor>vet[i])
            {
            menor=vet[i];
            pme=i;
            }
    }
        cout<<endl<<"Maior: "<<maior<<", na posicao "<<pma<<endl;
        cout<<endl<<"Menor: "<<menor<<", na posicao "<<pme<<endl;
}

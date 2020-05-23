#include<iostream>
using namespace std;

main()

{
    float vet[5];
    int i;

    for (i=0; i<5; i++)
    {
        cout<<"Vet: ";
        cin>>vet[i];
    }
    cout<<endl;

    for (i=4; i>=0; i--)
    {
        cout<<"Vet: "<<vet[i]<<endl;
    }
}

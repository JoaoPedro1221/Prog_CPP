#include <iostream>
using namespace std;
int verifica ()
{
    int x, y, z;
    cout<<"V1 :";
    cin>>x;
    cout<<"V2 :";
    cin>>y;
    cout<<"V1 :";
    cin>>z;

    if (x>y && x>z && y>z)
    {
        cout<<"Maior :"<<x<<endl<<"Menor : "<<z;
    }
    else if (x>y && x>z && z>y)
    {
        cout<<"Maior :"<<x<<endl<<"Menor : "<<y;
    }
    else if (y>x && y>z && x>z)
    {
        cout<<"Maior :"<<y<<endl<<"Menor : "<<z;
    }
    else if (y>x && y>z && z>x)
    {
        cout<<"Maior :"<<y<<endl<<"Menor : "<<x;
    }
    else if (z>x && z>y && x>y)
    {
        cout<<"Maior :"<<z<<endl<<"Menor : "<<x;
    }
    else
        cout<<"Erro";
}
main()
{
    verifica();
}

#include <iostream>
using namespace std;
void verifica (int x, int y, int z)
{
    int verifica;

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
    else if (z>x && z>y && y>x)
    {
        cout<<"Maior :"<<z<<endl<<"Menor : "<<y;
    }
    else
        cout<<"Erro";
}
main()
{
    int a, b, c;
    cout<<"V1 :";
    cin>>a;
    cout<<"V2 :";
    cin>>b;
    cout<<"V3 :";
    cin>>c;
    verifica(a, b, c);
}

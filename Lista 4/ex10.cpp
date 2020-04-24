#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float a, b, c;
    cout<<"Entre com o primeiro valor: "<<endl;
    cin>>a;
    cout<<"Entre com o segundo valor: "<<endl;
    cin>>b;
    cout<<"Entre com o terceiro valor: "<<endl;
    cin>>c;

    system("cls");

    if (a>b && a>c && b>c)
    {
        cout<<a<<", "<<b<<" e "<<c;
    }
    else if (a>b && a>c && c>b)
    {
        cout<<a<<", "<<c<<" e "<<b;
    }
    else if (b>a && b>c && a>c)
    {
        cout<<b<<", "<<a<<" e "<<c;
    }
    else if (b>a && b>c && c>a)
    {
        cout<<b<<", "<<c<<" e "<<a;
    }
    else if (c>a && c>b && b>a)
    {
        cout<<c<<", "<<b<<" e "<<a;
    }
    else if (c>a && c>b && a>b)
    {
        cout<<c<<", "<<a<<" e "<<b;
    }
    return 0;
}





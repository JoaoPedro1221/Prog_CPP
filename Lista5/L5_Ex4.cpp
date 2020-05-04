#include <iostream>
using namespace std;
int verifica (int a)

{
int	b;
    b=a%2;
    return b;
}

main()

{
int	x, y;
    cout<<"Digite o numero: ";
    cin>>x;
    y=verifica(x);
    cout<<y;
}

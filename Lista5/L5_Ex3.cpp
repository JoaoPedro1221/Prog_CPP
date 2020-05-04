#include <iostream>
using namespace std;
int verifica()

{
int	a, b;
    cout<<"Digite o numero: ";
    cin>>a;
    b=a%2;
    return b;
}

main()

{
int result;

    result = verifica();
    cout<<result;
}

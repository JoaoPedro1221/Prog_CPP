#include <iostream>
#include <math.h>
using namespace std;
verifica(int a)
{
    int b1, b2, b3;
    char r1, r2;
    b1=a/4;
    b2=a/100;
    b3=a/400;

    if ((b1==0 && b2!=0) || b3==0 )
        {
            r1='S';
            return r1;
        }
    else
        r2='N';
        return r2;
}
main()
{
    int ano;
    char ret;
    cout<<"Ano: ";
    cin>>ano;
    ret=verifica(ano);
    cout<<ret;
}

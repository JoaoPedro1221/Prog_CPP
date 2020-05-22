#include <iostream>
using namespace std;

main()
{
    int b=0;
    for(int a=0; a<=500; a++)
    {
        if (a%2==0)

        b=a+b;
    }
    cout<<b;
}



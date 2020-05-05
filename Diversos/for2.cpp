#include <iostream>
using namespace std;

main()
{   int a, b, c, N;
    cout<<"Quantos termos? : ";
    cin>>N;
    a=0;
    b=1;

    for(int i=2; i<=N; i++)
    {
    c = a + b;
    a = b;
    b = c;
    cout<<c<<endl;

    }
    return 0;
}



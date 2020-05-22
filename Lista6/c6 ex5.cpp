//JOÃO PEDRO FURQUIM MARQUES  RA:2017013984

#include <iostream>
using namespace std;
main()
{
    float b, ma, me;
    cin>>b;
    me=b;
    for(int a=0; a<5; a++)
    {
        cin>>b;
        if (b<me)
        {
            me=b;
        }
        else if (b>ma)
        {
            ma=b;
        }

    }
    cout<<"menor: "<<me<<endl;
    cout<<"maior: "<<ma;
}

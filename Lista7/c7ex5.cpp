#include<iostream>
using namespace std;

main()

{
    int M[3][3], i, j;

    for (i=0, i<3, i++)
    {
        for(j=0, j<3, j++)
        {
            cout<<"M";
            cin>>M[i][j];
        }
    }

      for (i=0, i<3, i++)
    {
        for(j=0, j<3, j++)
        {
            cout<<M[i][j];
        }
    }
}

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   double R, V;
   cout<<"Raio: ";
   cin>>R;
   V=(4.0/3.0) * M_PI * pow(R,3);
   system("cls");
   cout<<"Volume:"<<V<<endl;
   return 0;
}

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

main()

{
   float A, B, C, R, S, D;
   cout<<"Insira o valor de A: ";
   cin>>A;
   cout<<"Insira o valor de B: ";
   cin>>B;
   cout<<"Insira o valor de C: ";
   cin>>C;
   R=pow((A+B),2);
   S=pow((B+C),2);
   D=((R+S)/2);
   system("cls");
   cout<<"O seu valor final e: "<<D<<endl;
   return 0;
}

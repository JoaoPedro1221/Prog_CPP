#include <iostream>
#include <stdlib.h>
using namespace std;

main()

{
   float A, B, C, D, E, F, X, Y;
   cout<<"Insira o valor de A: ";
   cin>>A;
   cout<<"Insira o valor de B: ";
   cin>>B;
   cout<<"Insira o valor de C: ";
   cin>>C;
   cout<<"Insira o valor de D: ";
   cin>>D;
   cout<<"Insira o valor de E: ";
   cin>>E;
   cout<<"Insira o valor de F: ";
   cin>>F;
   X=((C*E)-(B*F))/((A*E)-(B*D));
   Y=((A*F)-(C*D))/((A*E)-(B*D));
   system("cls");
   cout<<"O valor de x e: "<<X<<endl;
   cout<<"O valor de y e: "<<Y<<endl;
   return 0;
}


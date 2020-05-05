#include <iostream>
using namespace std;
main()
{
   float h, peso;
   char sexo;
   cout<<"Sexo (M ou F): ";
   cin>>sexo;
   cout<<"Altura: ";
   cin>>h;

   if (sexo=='M' or sexo=='m')
   {
       peso=(72.7*h)-58.0;
   }
   else if (sexo=='F' or sexo=='f')
   {
        peso=(62.1*h)-44.7;
   }

    cout<<"Peso ideal e: "<<peso;

return 0;
}



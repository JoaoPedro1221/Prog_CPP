#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   float ValReal, ValorD, CotD;
   cout<<"Qual o valor que voce tem em Dolares?: ";
   cin>>ValorD;
   cout<<"Qual a cotacao do dolar?: ";
   cin>>CotD;
   ValReal= (ValorD/CotD);
   system("cls");
   cout<<"Voce tem "<<ValReal<<" reais!"<<endl;
   return 0;
}

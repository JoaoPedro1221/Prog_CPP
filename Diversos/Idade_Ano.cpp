#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   float Ano1, Ano2;
   cout<<"Qual o ano que voce nasceu?: ";
   cin>>Ano1;
   cout<<"Qual o ano que estamos agora?: ";
   cin>>Ano2;
   system("cls");
   cout<<"Voce tem "<<Ano2-Ano1<<" anos de idade!"<<endl;
   return 0;
}

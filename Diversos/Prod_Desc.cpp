#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   float Prod, Desc, Total;
   cout<<"Qual o valor do seu produto?: ";
   cin>>Prod;
   cout<<"Qual o valor do desconto em porcentagem?: ";
   cin>>Desc;
   Total=Prod-((Desc/100.0)*Prod);
   system("cls");
   cout<<"O valor do seu produto vai ser: "<<Total<<endl;
   return 0;
}

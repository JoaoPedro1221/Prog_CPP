#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   float NLados, SAInt, SAExt;
   char Func[20];
   cout<<"Quantos lados tem seu poligono?: ";
   cin>>NLados;
   SAInt=(NLados-2)*180;
   SAExt=(NLados+2)*180;
   system("cls"); //Limpar dados da Tela
   cout<<"A soma dos seus angulos internos e: "<<SAInt<<endl;
   cout<<"A soma dos seus angulos externos e: "<<SAExt<<endl;
   return 0;
}


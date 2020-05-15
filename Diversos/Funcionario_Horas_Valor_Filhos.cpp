#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   float NHoras, Sal;
   cout<<"Quantas horas voce trabalha?: ";
   cin>>NHoras;
   Sal=((NHoras*8))*(0.92);
   system("cls");
   cout<<"Seu salario e: "<<Sal<<endl;
   return 0;
}

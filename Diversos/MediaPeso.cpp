#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

main()

{
   float Num1, Num2, Num3, Num4, Num5, SomaM, Total;
   cout<<"Numero 1: ";
   cin>>Num1;
   cout<<"Numero 2: ";
   cin>>Num2;
   cout<<"Numero 3: ";
   cin>>Num3;
   cout<<"Numero 4: ";
   cin>>Num4;
   cout<<"Numero 5: ";
   cin>>Num5;
   SomaM=(Num1*1.0)+(Num2*2.0)+(Num3*3.0)+(Num4*4.0)+(Num5*5.0);
   Total=SomaM/15.0;
   system("cls");
   cout<<"Sua media e: "<<Total<<endl;
   return 0;
}


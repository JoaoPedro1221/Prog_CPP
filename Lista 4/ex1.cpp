#include <iostream>
#include <math.h>

using namespace std;

int main()
{
float alt, sexo;
char m, f;
cout<<"Qual sua Altura?";
cin>>alt;
cout<<"Qual seu sexo? (m ou f)";
cin>>sexo;

if (sexo==m)
    {
        cout<<(72.7*alt)-58;
    }
else if (sexo==f)
    {
        cout<<(62.1*alt)-44.7;
    }
else
{
    cout<<"ta errado otario";
}
return 0;
}

#include<iostream>

using namespace std;

main()
{
    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, br=0, nu=0, voto, a;
    int var=178;
    cout<<" Informe qual candidato deseja votar, voto nulo ou branco:\n";
    cout<<" 1- Candidato 1"<<endl;
    cout<<" 2- Candidato 2"<<endl;
    cout<<" 3- Candidato 3"<<endl;
    cout<<" 4- Candidato 4"<<endl;
    cout<<" 5- Candidato 5"<<endl;
    cout<<" 6- Candidato 6"<<endl;
    cout<<" 0- voto branco"<<endl;
    cout<<" Qualquer outro valor sera considerado nulo"<<endl;
    cin>>voto;

    do
    {
        if (voto==1)
        {
        c1++;
            cout<<" Informe qual candidato deseja votar, voto nulo ou branco:\n";
            cout<<" 1- Candidato 1 - VOTOS: "<<c1;  do
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }
                                                    while (a<c1)

            cout<<" 2- Candidato 2- VOTOS: "<<c2;  for	(a	=	1;	a	<=	c2;	a++)
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }

            cout<<" 3- Candidato 3- VOTOS: "<<c3;  for	(a	=	1;	a	<=	c3;	a++)
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }

            cout<<" 4- Candidato 4- VOTOS: "<<c4;  for	(a	=	1;	a	<=	c4;	a++)
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }

            cout<<" 5- Candidato 5- VOTOS: "<<c5;  for	(a	=	1;	a	<=	c5;	a++)
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }

            cout<<" 6- Candidato 6- VOTOS: "<<c6;  for	(a	=	1;	a	<=	c6;	a++)
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }

            cout<<" 0- voto branco - VOTOS: "<<br;  for	(a	=	1;	a	<=	br;	a++)
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }

            cout<<" Qualquer outro valor sera considerado nulo"<<endl;
            cout<<" Digite '-1' para sair"<<endl;
            cin>>voto;
        }
        if (voto==2)
        {
           c2++;
            cout<<" Informe qual candidato deseja votar, voto nulo ou branco:\n";
            cout<<" 1- Candidato 1 - VOTOS: "<<c1;  do
                                                    {
                                                    cout<<(char)var<<endl;
                                                    }
                                                    while (a<=c2);
            cout<<" 2- Candidato 2"<<endl;
            cout<<" 3- Candidato 3"<<endl;
            cout<<" 4- Candidato 4"<<endl;
            cout<<" 5- Candidato 5"<<endl;
            cout<<" 6- Candidato 6"<<endl;
            cout<<" 0- voto branco"<<endl;
            cout<<" Qualquer outro valor sera considerado nulo"<<endl;
            cout<<" Digite '-1' para sair"<<endl;
            cin>>voto;
        }
    } while (voto>=0);

}

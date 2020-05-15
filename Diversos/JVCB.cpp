#include <iostream>
#include <cstdlib>

using namespace std;

char Tabuleiro[3][3];
int xpts=0, opts=0;
bool Marcar ( char Simbolo, int linha, int coluna)
{
    if (Tabuleiro[linha][coluna] == ' ')
    {
        Tabuleiro[linha][coluna] = Simbolo;
        return true;
    }
    return false;
}
void Mostra ()
{
    cout <<" " <<  Tabuleiro[0][0] << " | " << Tabuleiro[0][1] << " | " << Tabuleiro[0][2] << endl
         << "---|---|---" << endl
         <<" " << Tabuleiro[1][0] << " | " << Tabuleiro[1][1] << " | " << Tabuleiro[1][2] << endl
         << "---|---|---" << endl
         <<" " << Tabuleiro[2][0] << " | " << Tabuleiro[2][1] << " | " << Tabuleiro[2][2] << endl;
}

bool VerificaVitoria()
{
    // VERIFICA SE O JOGADOR GANHOU
    if (    (Tabuleiro[0][0] == Tabuleiro [0][1] && Tabuleiro[0][1] == Tabuleiro[0][2]&& Tabuleiro[0][0] == 'x') ||
            (Tabuleiro[1][0] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[1][2]&& Tabuleiro[1][0] == 'x') ||
            (Tabuleiro[2][0] == Tabuleiro [2][1] && Tabuleiro[2][1] == Tabuleiro[2][2]&& Tabuleiro[2][0] == 'x') )
    {

            cout << "\nJogador X ganhou\n";
            xpts=xpts+1;
            return true;

    }

    else if((Tabuleiro[0][0] == Tabuleiro [0][1] && Tabuleiro[0][1] == Tabuleiro[0][2]&& Tabuleiro[0][0] == 'o') ||
            (Tabuleiro[1][0] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[1][2]&& Tabuleiro[1][0] == 'o') ||
            (Tabuleiro[2][0] == Tabuleiro [2][1] && Tabuleiro[2][1] == Tabuleiro[2][2]&& Tabuleiro[2][0] == 'o') )
    {
        cout << "\nJogador O ganhou\n";
            opts=opts+1;
            return true;
    }

    //VERIFICA COLUNAS
    else if ((Tabuleiro[0][0] == Tabuleiro [1][0] && Tabuleiro[1][0] == Tabuleiro[2][0] && Tabuleiro[0][0] == 'x')||
             (Tabuleiro[0][1] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[2][1] && Tabuleiro[0][1] == 'x')||
             (Tabuleiro[0][2] == Tabuleiro [1][2] && Tabuleiro[1][2] == Tabuleiro[2][2] && Tabuleiro[0][2] == 'x'))
    {


            cout << "\nJogador X ganhou\n";
            xpts=xpts+1;
            return true;

    }
    else if ((Tabuleiro[0][0] == Tabuleiro [1][0] && Tabuleiro[1][0] == Tabuleiro[2][0] && Tabuleiro[0][0] == 'o')||
             (Tabuleiro[0][1] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[2][1] && Tabuleiro[0][1] == 'o')||
             (Tabuleiro[0][2] == Tabuleiro [1][2] && Tabuleiro[1][2] == Tabuleiro[2][2] && Tabuleiro[0][2] == 'o'))
    {

            cout << "\nJogador O ganhou\n";
            opts=opts+1;
            return true;

    }



//VERIFICA DIAGONAL VENCEDORA

    else if ((Tabuleiro[0][0] == Tabuleiro[1][1] && Tabuleiro[1][1] == Tabuleiro[2][2]&& Tabuleiro[0][0] == 'x') ||
             (Tabuleiro[2][0] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[0][2]&& Tabuleiro[2][0] == 'x') )
    {


            cout << "\nJogador X ganhou\n";
            xpts=xpts+1;
            return true;


    }


    else if ((Tabuleiro[0][0] == Tabuleiro[1][1] && Tabuleiro[1][1] == Tabuleiro[2][2]&& Tabuleiro[0][0] == 'o') ||
             (Tabuleiro[2][0] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[0][2]&& Tabuleiro[2][0] == 'o') )
    {

        cout << "\nJogador O ganhou\n";
            opts=opts+1;
            return true;
    }
    return false;
}
void CriaTabuleiro()
{
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            Tabuleiro[i][j]= ' ';
}
int main ()
{
    char jogar;
    int linha,coluna;
    int jogada=0;
    while(jogar != 'N' || jogar != 'n')
    {
        system("cls");
        CriaTabuleiro();
        while (!VerificaVitoria())
        {

            Mostra();
            if (jogada%2 == 0)   //VEZ DO PRIMEIRO JOGADOR
            {
                cout << endl << "Jogador X, entre com a linha (0 a 2) e coluna (0 a 2): ";
                cin >> linha >> coluna;
                if (Marcar('x',linha,coluna)) //CONDICAOO PARA NAO COLOCAR DOIS SIMBOLOS NA MESMA CASA
                    jogada++;
            }
            else              // VEZ DO SEGUNDO JOGADOR
            {
                cout << endl << "Jogador O, entre com a linha(0 a 2) e coluna(0 a 2): ";
                cin >> linha >> coluna;
                if( Marcar('o',linha,coluna)) //CONDICAOO PARA NAO COLOCAR DOIS SIMBOLOS NA MESMA CASA
                    jogada++;
            }
            system("cls");
        }
        Mostra();
        cout<<"Jogador 'X' tem "<<xpts<<"pts"<<endl;
        cout<<"Jogardor 'O' tem "<<opts<<"pts"<<endl;
        cout<<"Voce quer jogar o jogo da velha novamente? S/N?"<<endl;
        cin>>jogar;
        if (jogar=='N'|| jogar =='n')
        {
            return 0;
        }
    }
}

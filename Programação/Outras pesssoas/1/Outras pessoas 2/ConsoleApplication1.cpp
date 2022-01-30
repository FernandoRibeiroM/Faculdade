#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    char nome[30];
    int idade;
    char sexo;
    char corDaPeca;
    int pontuacao;
    bool vez;
} Jogador;

bool PosicaoExiste(int linha, int coluna)
{
    if (linha > 7 || linha < 0 || coluna > 7 || coluna < 0)
        return false;
    return true;
}

bool PosicaoOcupada(char tab[][8], int linha, int coluna)
{
    if (tab[linha][coluna] == '0')
        return false;
    else
        return true;
}

void JogadasPossiveis(char tab[][8], char jogador, bool matriz[][8])
{
    char inimigo;
    if (jogador == 'P') inimigo = 'B';
    else if (jogador == 'B') inimigo = 'P';

    for (int i = 0; i < 8; i++)
    {
        for (int c = 0; c < 8; c++)
        {
            if (matriz[i][c] != true)
                matriz[i][c] = false;

            //Peca
            if (tab[i][c] == jogador)
            {

                //Oeste
                int linha = i;
                int coluna = c - 1;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && coluna == c - 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador) {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                        coluna--;
                    else if (tab[linha][coluna] == '0' && coluna != c - 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Noroeste
                linha = i - 1;
                coluna = c - 1;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && linha == i - 1 && coluna == c - 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        linha--;
                        coluna--;
                    }
                    else if (tab[linha][coluna] == '0' && linha != i - 1 && coluna != c - 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Norte
                linha = i - 1;
                coluna = c;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && linha == i - 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        linha--;
                    }
                    else if (tab[linha][coluna] == '0' && linha != i - 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Nordeste
                linha = i - 1;
                coluna = c + 1;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && linha == i - 1 && coluna == c + 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        linha--;
                        coluna++;
                    }
                    else if (tab[linha][coluna] == '0' && linha != i - 1 && coluna != c + 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Leste
                linha = i;
                coluna = c + 1;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && coluna == c + 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        coluna++;
                    }
                    else if (tab[linha][coluna] == '0' && coluna != c + 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Sudeste
                linha = i + 1;
                coluna = c + 1;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && linha == i + 1 && coluna == c + 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        linha++;
                        coluna++;
                    }
                    else if (tab[linha][coluna] == '0' && linha != i + 1 && coluna != c + 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Sul
                linha = i + 1;
                coluna = c;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && linha == i + 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        linha++;
                    }
                    else if (tab[linha][coluna] == '0' && linha != i + 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }

                //Sudoeste
                linha = i + 1;
                coluna = c - 1;
                while (PosicaoExiste(linha, coluna))
                {
                    if (tab[linha][coluna] == '0' && linha == i + 1 && coluna == c - 1)
                    {
                        break;
                    }
                    else if (tab[linha][coluna] == jogador)
                    {
                        break;
                    }
                    if (tab[linha][coluna] == inimigo)
                    {
                        linha++;
                        coluna--;
                    }
                    else if (tab[linha][coluna] == '0' && linha != i + 1 && coluna != c - 1)
                    {
                        matriz[linha][coluna] = true;
                        break;
                    }
                }
            }
        }
    }
}

void ImprimirTabuleiro(char tab[][8], char jogador)
{
    bool JogadasValidas[8][8];
    JogadasPossiveis(tab, jogador, JogadasValidas);

    int coluna = 1;
    printf("  A B C D E F G H\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", coluna);
        coluna++;
        for (int c = 0; c < 8; c++)
        {
            if (JogadasValidas[i][c] == true)
            { 
                printf("x ");
            }
            else if (tab[i][c] == '0')
                printf("- ");
            else if (tab[i][c] == 'P')
                printf("P ");
            else if (tab[i][c] == 'B')
                printf("B ");
        }
        printf("\n");
    }
    printf("\n");
}

void InicializarTabuleiro(char tab[][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int c = 0; c < 8; c++)
        {
            if ((i == 3 && c == 3) || (i == 4 && c == 4))
                tab[i][c] = 'B';
            else if ((i == 4 && c == 3) || (i == 3 && c == 4))
                tab[i][c] = 'P';
            else
                tab[i][c] = '0';
        }
    }
}

bool AdicionarPeca(char tab[][8], int linha, int coluna, char jogador)
{
    bool matriz[8][8];

    if (!PosicaoExiste(linha, coluna))
    {
        printf("Posicao nao existe!\n");
        return false;
    }
    if (PosicaoOcupada(tab, linha, coluna))
    {
        printf("Posicao ja esta ocupada!\n");
        return false;
    }
    JogadasPossiveis(tab, jogador, matriz);

    if (!matriz[linha][coluna])
    {
        printf("Selecione uma posicao valida!\n");
        return false;
    }

    tab[linha][coluna] = jogador;
    return true;
}

bool VerificarTermino(char tab[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int c = 0; c < 8; c++)
        {
            if (tab[i][c] == '0')
                return false;
        }
    }
    return true;
}

void AtualizarTabuleiro(char tab[][8], char jogador, int le, int ce)
{
    char adversario;
    if (jogador == 'P') adversario = 'B';
    else if (jogador == 'B') adversario = 'P';

    int linha, coluna;
    int quant;

    //norte
    quant = 0;
    linha = le - 1;
    coluna = ce;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            linha--;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le - 1;
            coluna = ce;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                linha--;
            }
            break;
        }
    }

    //nordeste
    quant = 0;
    linha = le-1;
    coluna = ce+1;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            linha--;
            coluna++;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le - 1;
            coluna = ce + 1;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                linha--;
                coluna++;
            }
            break;
        }
    }

    //Leste
    quant = 0;
    linha = le;
    coluna = ce + 1;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            coluna++;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le;
            coluna = ce + 1;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                coluna++;
            }
            break;
        }
    }

    //Sudeste
    quant = 0;
    linha = le + 1;
    coluna = ce + 1;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            coluna++;
            linha++;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le + 1;
            coluna = ce + 1;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                coluna++;
                linha++;
            }
            break;
        }
    }

    //Sul
    quant = 0;
    linha = le + 1;
    coluna = ce;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            linha++;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le + 1;
            coluna = ce;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                linha++;
            }
            break;
        }
    }

    //Sudoeste
    quant = 0;
    linha = le + 1;
    coluna = ce - 1;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            coluna--;
            linha++;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le + 1;
            coluna = ce - 1;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                coluna--;
                linha++;
            }
            break;
        }
    }

    //Oeste
    quant = 0;
    linha = le;
    coluna = ce - 1;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            coluna--;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le;
            coluna = ce - 1;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                coluna--;
            }
            break;
        }
    }

    //Noroeste
    quant = 0;
    linha = le - 1;
    coluna = ce - 1;
    while (PosicaoExiste(linha, coluna))
    {
        if (tab[linha][coluna] == '0')
            break;
        else if (tab[linha][coluna] == jogador && quant == 0)
            break;
        if (tab[linha][coluna] == adversario)
        {
            coluna--;
            linha--;
            quant++;
        }
        else if (tab[linha][coluna] == jogador && quant != 0)
        {
            linha = le - 1;
            coluna = ce - 1;
            for (int i = quant; i > 0; i--)
            {
                tab[linha][coluna] = jogador;
                coluna--;
                linha--;
            }
            break;
        }
    }
}

int main() {
    char tab[8][8];
    bool cond = true;

    Jogador player[2];
    player[0].vez = false;
    player[1].vez = false;
    player[0].pontuacao = 0;
    player[1].pontuacao = 0;

    srand(time(NULL));
    int random = rand() % 2;
    if (random == 0)
    {
        player[0].corDaPeca = 'P';
        player[0].vez = true;
        player[1].corDaPeca = 'B';
    }
    else
    {
        player[1].corDaPeca = 'P';
        player[1].vez = true;
        player[0].corDaPeca = 'B';
    }

    for (int i = 0; i < 2; i++)
    {
        printf("-=-=- Cadastro do jogador %d -=-=- \n\n", i + 1);

        if (player[i].corDaPeca == 'P')
            printf("Cor da peca: Preta");
        else
            printf("Cor da peca: Branca");
        printf("\n");

        printf("Nome do jogador: ");
        setbuf(stdin, NULL);
        scanf("%s", player[i].nome);

        printf("Idade do jogador: ");
        scanf("%d", &player[i].idade);

        printf("Sexo do jogador [M/F]: ");
        setbuf(stdin, NULL);
        scanf("%c", &player[i].sexo);

        system("Pause");
        system("Cls");
    }

    InicializarTabuleiro(tab);

    int turno = 1, vezDoJogador;
    while (cond == true)
    {
        if (player[0].vez == true)
        {
            vezDoJogador = 0;
        }
        else if (player[1].vez == true)
        {
            vezDoJogador = 1;
        }

        printf("Turno %d\nJogador: %s\nPeca: %c\n\n", turno, player[vezDoJogador].nome, player[vezDoJogador].corDaPeca);

        ImprimirTabuleiro(tab, player[vezDoJogador].corDaPeca);

        while (true)
        {
            bool matrizTeste[8][8];
            for (int i = 0; i < 8; i++)
            {
                for (int c = 0; c < 8; c++)
                {
                    matrizTeste[i][c] = false;
                }
            }
            JogadasPossiveis(tab, player[vezDoJogador].corDaPeca, matrizTeste);;


            bool existeJogadaPossivel = false;
            for (int i = 0; i < 8; i++)
            {
                for (int c = 0; c < 8; c++)
                {
                    if (matrizTeste[i][c])
                    {
                        existeJogadaPossivel = true;
                        break;
                    }
                }
                if (existeJogadaPossivel)
                    break;
            }

            if (!existeJogadaPossivel)
            {
                printf("Nao existe jogada possivel\n");
                break;
            }

            char posicao[2];
            printf("Digite uma posicao para adicionar nova peca: ");
            setbuf(stdin, NULL);
            scanf("%s", posicao);

            int linha = ((int)posicao[0] - 49);

            int coluna = ((int)posicao[1]) - 65;

            if (AdicionarPeca(tab, linha, coluna, player[vezDoJogador].corDaPeca))
            {
                AtualizarTabuleiro(tab, player[vezDoJogador].corDaPeca, linha, coluna);
                break;
            }
        }
        if (VerificarTermino(tab))
        {
            printf("Partida finalizada!\n\n");
                
            for (int i = 0; i < 8; i++)
            {
                for (int c = 0; c < 8; c++)
                {
                    if (tab[i][c] == player[0].corDaPeca)
                        player[0].pontuacao++;
                    else if (tab[i][c] == player[1].corDaPeca)
                        player[1].pontuacao++;
                }
            }
            if (player[0].pontuacao > player[1].pontuacao)
            {
                printf("Vencedor: %s\nIdade: %d\nSexo: %c\nCor da peca: %c\nPontuacao realizada: %d\n\n",
                    player[0].nome, player[0].idade, player[0].sexo, player[0].corDaPeca, player[0].pontuacao);
                printf("Perdedor: %s\nIdade: %d\nSexo: %c\nCor da peca: %c\nPontuacao realizada: %d\n\n",
                    player[1].nome, player[1].idade, player[1].sexo, player[1].corDaPeca, player[1].pontuacao);
            }
            else
            {
                printf("Vencedor: %s\nIdade: %d\nSexo: %c\nCor da peca: %c\nPontuacao realizada: %d\n\n",
                    player[1].nome, player[1].idade, player[1].sexo, player[1].corDaPeca, player[1].pontuacao);
                printf("Perdedor: %s\nIdade: %d\nSexo: %c\nCor da peca: %c\nPontuacao realizada: %d\n\n",
                    player[0].nome, player[0].idade, player[0].sexo, player[0].corDaPeca, player[0].pontuacao);
            }
        }

        if (player[0].vez == true)
        {
            player[0].vez = false;
            player[1].vez = true;
        }

        else if (player[1].vez == true)
        {
            player[1].vez = false;
            player[0].vez = true;
        }

        turno++;

        system("pause");
        system("cls");
    }
}

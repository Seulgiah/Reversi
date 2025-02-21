#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int linha, coluna;
} coordenada;


void ExecutaJogada(int tabuleiro[8][8], int jogador, coordenada jogada)
{
    /*Se a jogada for válida, a função deve modificar o
      tabuleiro de acordo com as regras e retornar 1; caso contrário, deve manter o tabuleiro como está e
      retornar 0.*/

    /*Se a função ExecutaJogada() retornar 0, o programa deve indicar que a jogada é inválida e solicitar
      uma nova jogada. Isso deve acontecer até que o jogador da vez informe uma jogada válida.
      Considere, nessa primeira versão do trabalho, que sempre existirá pelo menos uma jogada valida.
      Se a função ExecutaJogada() retornar 1, o programa deve mudar o jogador da vez.*/

    return 0;
}

coordenada EscolheJogada()
{
    coordenada jogada;
    scanf("%d %d", &jogada.linha, &jogada.coluna);
    return jogada;
}


void DesenhaTabuleiro()
{
    return 0;
}

int main()
{

    coordenada jogada;
    int tabuleiro[8][8];
    jogada = EscolheJogada();
    printf("Linha: %d\nColuna: %d", jogada.linha, jogada.coluna);

    return 0;
}
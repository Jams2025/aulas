#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// desenvolver um jogo de Maior, Menor ou Igual contra o computador. Utilizando operadores ternários, estruturas de decisão if, if-else e switch, você criará um programa em que o jogador escolhe um número e um tipo de comparação (maior, menor ou igual) para competir contra um número gerado aleatoriamente pelo computador.
int main () {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Número entre 1 e 100

    //Inicio do Jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("T. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    //Exibir número do computador
    printf("O número do computador é %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf(" O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);
    
    if (resultado == 1)
    {
        printf("Você venceu!\n");
    }else {
        printf("Você perdeu!\n");
    }
    return 0;
}


#include <stdio.h>

int main() {

    // Declaração de variaveis 
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // Entrada dos dados

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com a estoque: \n");
    scanf("%u", &estoque);

    //Exibição temperatura

    if(temperatura > 30){
        printf("Temperatura está alta\n");
    } 
    else {
        printf("Temperatura está dentro dos parâmentros\n");
    }
    // Exibição Umidade

if(umidade > 50){
        printf("Umidade elevada\n");
    } 
    else {
        printf("Umidade está dentro dos parâmentros\n");
    }

    //Exibição estoque

if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo\n");
    } 
    else {
        printf("Estoque normal!\n");
    }

}
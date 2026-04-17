#include <stdio.h>

int main(){
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    //Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Entrada de dados - carta 1
    printf("Carta 1\n");

    printf("Estado (A a H): ");
    scanf("%c, &estado1");

    printf("Código da carta (ex.: A01): ");
    scanf("%s, &codigo1");

    printf("Nome da cidade: ");
    scanf(" %[^\n], &cidade1");

    print("População: ");
    scanf("%d, populacao1");

    printf("Área (km²): ");
    scanf("%f, &area1");

    printf("PIB (em bilhões): ");
    scanf("%f, &pib1");

    printf("Número de pontos turísticos: ");
    scanf("%d, &pontos_turisticos1");

    // Entrada carta 2
    printf("Carta 2\n");

    printf("Estado (A a H): ");
    scanf("%c, &estado2");

    printf("Código da carta (ex.: A01): ");
    scanf("%s, &codigo2");

    printf("Nome da cidade: ");
    scanf(" %[^\n], &cidade2");

    print("População: ");
    scanf("%d, populacao2");

    printf("Área (km²): ");
    scanf("%f, &area2");

    printf("PIB (em bilhões): ");
    scanf("%f, &pib2");

    printf("Número de pontos turísticos: ");
    scanf("%d, &pontos_turisticos2");

    //Exibição carta 1
    printf("\n Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    //Exibição carta 2
    printf("\n Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}

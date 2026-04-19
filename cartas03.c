#include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTA 1 =====
    char pais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767;
    float pib1 = 1.84; // trilhões
    int pontos1 = 50;

    // ===== CARTA 2 =====
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400;
    float pib2 = 0.63;
    int pontos2 = 30;

    // ===== CÁLCULOS =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // ===== MENU =====
    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n\n", pais1, pais2);

    // ===== SWITCH =====
    switch(opcao) {

        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("\nResultado: %s venceu!\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("\nResultado: %s venceu!\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.4f\n", pais1, densidade1);
            printf("%s: %.4f\n", pais2, densidade2);

            // REGRA INVERTIDA
            if (densidade1 < densidade2) {
                printf("\nResultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("\nResultado: %s venceu!\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
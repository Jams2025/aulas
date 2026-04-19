#include <stdio.h>

int main() {

    // ===== CARTAS =====
    char pais1[] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767;
    float pib1 = 1.84;
    int pontos1 = 50;

    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400;
    float pib2 = 0.63;
    int pontos2 = 30;

    // ===== CÁLCULOS =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int op1, op2;

    // ===== MENU 1 =====
    printf("=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade\n");
    scanf("%d", &op1);

    // ===== MENU 2 (DINÂMICO) =====
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");

    for (int i = 1; i <= 5; i++) {
        if (i != op1) { //inverter quando i = op1
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade\n"); break;
            }
        }
    }

    scanf("%d", &op2);

    if (op1 == op2) {
        printf("\nErro: atributos iguais!\n");
        return 0;
    }

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    // ===== FUNÇÃO MANUAL VIA SWITCH (ATRIBUTO 1) =====
    switch(op1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            printf("\nAtributo 1: População\n");
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            printf("\nAtributo 1: Área\n");
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            printf("\nAtributo 1: PIB\n");
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            printf("\nAtributo 1: Pontos Turísticos\n");
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            printf("\nAtributo 1: Densidade\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    // ===== ATRIBUTO 2 =====
    switch(op2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            printf("Atributo 2: População\n");
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            printf("Atributo 2: Área\n");
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            printf("Atributo 2: PIB\n");
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            printf("Atributo 2: Pontos Turísticos\n");
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            printf("Atributo 2: Densidade\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    // ===== EXIBIÇÃO =====
    printf("\n%s: %.2f | %.2f\n", pais1, valor1_c1, valor2_c1);
    printf("%s: %.2f | %.2f\n", pais2, valor1_c2, valor2_c2);

    // ===== COMPARAÇÃO INDIVIDUAL =====
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    // ATRIBUTO 1
    if (op1 == 5) { // densidade
        (valor1_c1 < valor1_c2) ? pontosCarta1++ : (valor1_c2 < valor1_c1 ? pontosCarta2++ : 0);
    } else {
        (valor1_c1 > valor1_c2) ? pontosCarta1++ : (valor1_c2 > valor1_c1 ? pontosCarta2++ : 0);
    }

    // ATRIBUTO 2
    if (op2 == 5) {
        (valor2_c1 < valor2_c2) ? pontosCarta1++ : (valor2_c2 < valor2_c1 ? pontosCarta2++ : 0);
    } else {
        (valor2_c1 > valor2_c2) ? pontosCarta1++ : (valor2_c2 > valor2_c1 ? pontosCarta2++ : 0);
    }

    // ===== SOMA DOS VALORES =====
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma %s: %.2f", pais1, soma1);
    printf("\nSoma %s: %.2f\n", pais2, soma2);

    // ===== RESULTADO FINAL =====
    if (soma1 > soma2) {
        printf("\nResultado Final: %s venceu!\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nResultado Final: %s venceu!\n", pais2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
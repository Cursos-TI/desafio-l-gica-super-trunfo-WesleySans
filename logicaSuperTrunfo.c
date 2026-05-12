#include <stdio.h>

int main() {

    // CARTA 1
    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 2174.0;
    int pontos1 = 30;

    // CARTA 2
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontos2 = 20;

    // Densidade demográfica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;

    float valor1Carta1 = 0;
    float valor1Carta2 = 0;

    float valor2Carta1 = 0;
    float valor2Carta2 = 0;

    char nomeAttr1[30];
    char nomeAttr2[30];

    // MENU 1
    printf("===== SUPER TRUNFO =====\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo1);

    printf("\n");

    // MENU 2
    printf("Escolha o SEGUNDO atributo:\n");

    if (atributo1 != 1)
        printf("1 - Populacao\n");

    if (atributo1 != 2)
        printf("2 - Area\n");

    if (atributo1 != 3)
        printf("3 - PIB\n");

    if (atributo1 != 4)
        printf("4 - Pontos Turisticos\n");

    if (atributo1 != 5)
        printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    printf("\n");

    if (atributo1 == atributo2) {
        printf("Erro: voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // ATRIBUTO 1
    switch (atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            sprintf(nomeAttr1, "Populacao");
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            sprintf(nomeAttr1, "Area");
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            sprintf(nomeAttr1, "PIB");
            break;

        case 4:
            valor1Carta1 = pontos1;
            valor1Carta2 = pontos2;
            sprintf(nomeAttr1, "Pontos Turisticos");
            break;

        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            sprintf(nomeAttr1, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ATRIBUTO 2
    switch (atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            sprintf(nomeAttr2, "Populacao");
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            sprintf(nomeAttr2, "Area");
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            sprintf(nomeAttr2, "PIB");
            break;

        case 4:
            valor2Carta1 = pontos1;
            valor2Carta2 = pontos2;
            sprintf(nomeAttr2, "Pontos Turisticos");
            break;

        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            sprintf(nomeAttr2, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Ajuste da regra da densidade
    float somaCarta1 = 0;
    float somaCarta2 = 0;

    // ATRIBUTO 1
    if (atributo1 == 5) {
        somaCarta1 += (1 / valor1Carta1);
        somaCarta2 += (1 / valor1Carta2);
    } else {
        somaCarta1 += valor1Carta1;
        somaCarta2 += valor1Carta2;
    }

    // ATRIBUTO 2
    if (atributo2 == 5) {
        somaCarta1 += (1 / valor2Carta1);
        somaCarta2 += (1 / valor2Carta2);
    } else {
        somaCarta1 += valor2Carta1;
        somaCarta2 += valor2Carta2;
    }

    printf("===== RESULTADO =====\n\n");

    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n\n", pais2);

    printf("%s:\n", nomeAttr1);
    printf("%s = %.2f\n", pais1, valor1Carta1);
    printf("%s = %.2f\n\n", pais2, valor1Carta2);

    printf("%s:\n", nomeAttr2);
    printf("%s = %.2f\n", pais1, valor2Carta1);
    printf("%s = %.2f\n\n", pais2, valor2Carta2);

    printf("Soma %s: %.2f\n", pais1, somaCarta1);
    printf("Soma %s: %.2f\n\n", pais2, somaCarta2);

    if (somaCarta1 == somaCarta2) {
        printf("Empate!\n");
    } else {
        printf("Vencedor: %s\n",
               (somaCarta1 > somaCarta2) ? pais1 : pais2);
    }

    return 0;
}
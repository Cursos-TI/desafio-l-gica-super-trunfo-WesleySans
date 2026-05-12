#include <stdio.h>

int main() {

    char estado1[3] = "SP";
    char codigo1[5] = "A01";
    char cidade1[30] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    char estado2[3] = "RJ";
    char codigo2[5] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;


    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n",
           cidade1, estado1, populacao1);

    printf("Carta 2 - %s (%s): %d habitantes\n\n",
           cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\n--- Dados adicionais ---\n");

    printf("%s - Densidade Populacional: %.2f\n",
           cidade1, densidade1);

    printf("%s - PIB per capita: %.6f\n",
           cidade1, pibPerCapita1);

    printf("%s - Densidade Populacional: %.2f\n",
           cidade2, densidade2);

    printf("%s - PIB per capita: %.6f\n",
           cidade2, pibPerCapita2);

    return 0;
}
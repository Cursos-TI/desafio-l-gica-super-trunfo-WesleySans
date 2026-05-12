#include <stdio.h>

int main() {

    // Carta 1
    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 2174.0;
    int pontosTuristicos1 = 30;

    // Carta 2
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontosTuristicos2 = 20;

    // Densidade demografica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu
    printf("===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n\n");

    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    // Switch para escolher comparação
    switch(opcao) {

        case 1:
            printf("Comparacao por Populacao\n\n");

            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            if(populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            }
            else if(populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 2:
            printf("Comparacao por Area\n\n");

            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);

            if(area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            }
            else if(area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 3:
            printf("Comparacao por PIB\n\n");

            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);

            if(pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            }
            else if(pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 4:
            printf("Comparacao por Pontos Turisticos\n\n");

            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n\n", pais2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);
            }
            else if(pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 5:
            printf("Comparacao por Densidade Demografica\n\n");

            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n\n", pais2, densidade2);

            if(densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            }
            else if(densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
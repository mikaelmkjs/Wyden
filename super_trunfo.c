#include <stdio.h>

int main() {
    //carta 1
    char estado1[] = "SP";
    char codigo1[] = "C001";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 700.0;
    int pontosTuristicos1 = 50;

    //carta 2
    char estado2[] = "RJ";
    char codigo2[] = "C002";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1182.3;
    float pib2 = 350.0;
    int pontosTuristicos2 = 40;

    //(população / área)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Calculando PIB per capita (PIB / população)
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    //informações das cartas
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f\n\n", pibPerCapita2);

    //População
    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
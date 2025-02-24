#include <stdio.h>

// Super Trunfo - Comparação de Cartas

int main() {
    // Declaração de variáveis para a primeira carta
    char codigo1[20], nome1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Entrada de dados para a primeira carta
    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Declaração de variáveis para a segunda carta
    char codigo2[20], nome2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada de dados para a segunda carta
    printf("\nDigite o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição das informações cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    printf("Carta 1: %s (%s)\n", nome1, codigo1);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nPontos Turísticos: %d\n",
           populacao1, area1, pib1, densidade1, pibPerCapita1, pontosTuristicos1);

    printf("\nCarta 2: %s (%s)\n", nome2, codigo2);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nPontos Turísticos: %d\n",
           populacao2, area2, pib2, densidade2, pibPerCapita2, pontosTuristicos2);

    // Comparação de um atributo fixo
    char atributoComparado[] = "População";
    int valor1 = populacao1;
    int valor2 = populacao2;
    
    printf("\n=== Comparação de Cartas (Atributo: %s) ===\n", atributoComparado);
    
    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Empate! Ambas têm o mesmo valor para o atributo %s.\n", atributoComparado);
    }

    return 0;
}

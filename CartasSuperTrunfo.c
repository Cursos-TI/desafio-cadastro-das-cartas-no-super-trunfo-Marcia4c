#include <stdio.h>

int main() {
    
    char Estado [1];
    char Codigocarta [3];
    char nomedacidade [10];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o Estado da primeira carta: ");
    scanf("%s", Estado);

    printf("Digite o código da carta: ");
    scanf("%s", Codigocarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area);

    printf("Informe o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Digite a quantidae de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos);

    printf("Estado:  %s\n", Estado);
    printf("Carta 01:  %s\n", Codigocarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    printf("Digite o Estado da segunda carta: ");
    scanf("%s", Estado);

    printf("Digite o código da carta: ");
    scanf("%s", Codigocarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area);

    printf("Informe o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Digite a quantidae de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos);

    printf("Estado: %s\n", Estado);
    printf("Carta 02: %s\n", Codigocarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

       return 0;
}

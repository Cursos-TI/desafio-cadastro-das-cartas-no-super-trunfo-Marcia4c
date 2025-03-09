#include <stdio.h>

int main() {
    
    char Estado1[1], Estado2[2];
    char Codigocarta1[3], Codigocarta2[3];
    char nomedacidade1[10], nomedacidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float resultado1, resultado2;

    printf("Digite o Estado da primeira carta: ");
    scanf("%s", Estado1);
    printf("Digite o código da carta: ");
    scanf("%s", Codigocarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade1);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area1);
    printf("Informe o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos1);

    //printf("Estado:  %s\n", Estado1);
    //printf("Carta 01:  %s\n", Codigocarta1);
    //printf("Nome da cidade: %s\n", nomedacidade1);
    //printf("População: %d\n", populacao1);
    //printf("Área em km²: %f\n", area1);
    //printf("PIB: %f\n", pib1);
    //printf("Pontos Turísticos: %d\n", pontosturisticos1);

    //Cálculo da densidade populacional carta 01

    //resultado1 = (float)populacao1 / area1;

    //printf("Densidade populacional Carta 01: ");
    //scanf("%f/%f = %f", &populacao1, &area1, &resultado1);

    //Cálculo do PIB per capita carta 01

    //resultado2 = pib1 / populacao1;

    //printf("O PIB per capita Carta 01: %f / %d = %d", &pib1, &populacao1, &resultado2);
    //scanf("%d / %f", &resultado2);

    printf("Digite o Estado da segunda carta: ");
    scanf("%s", Estado2);
    printf("Digite o código da carta: ");
    scanf("%s", Codigocarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade2);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area2);
    printf("Informe o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf(" %d", &pontosturisticos2);

    //printf("Estado: %s\n", Estado2);
    //printf("Carta 02: %s\n", Codigocarta2);
    //printf("Nome da cidade: %s\n", nomedacidade2);
    //printf("População: %d\n", populacao2);
    //printf("Área em km²: %f\n", area2);
    //printf("PIB: %f\n", pib2);
    //printf("Pontos Turísticos: %d\n", pontosturisticos2);

    //Cálculo da densidade populacional carta 02

    //resultado1 = populacao2 / area2;

    //printf("Densidade populacional Carta 02: %d / %f = %d", &populacao2, &area2, &resultado1);
    //scanf("%d / %f", &resultado1);

    //Cálculo do PIB per capita carta 02

    //resultado2 = pib2 / populacao2;

    //printf("O PIB per capita Carta 02: %f / %d = %d", &pib2, &populacao2, &resultado2);
    //scanf("%d / %f", &resultado2);

    // Comparando um atributo: população

    if(populacao1> populacao2){
        printf("Carta 01 tem a maior população!\n");
    }else{
        printf("Carta 02 tem a maior população!\n");
    }

    // Carta vencedora: comparação do atributo e exibição do resultado

    if(populacao1> populacao2){
        printf("Resultado:\n");
        printf("A Carta 01 venceu! %s %d \n", nomedacidade1 , populacao1);
        printf("A Carta 02 perdeu! %s %d \n", nomedacidade2 , populacao2);       
    }else{
        printf("Resultado:\n");
        printf("A Carta 02 venceu! %s %d \n", nomedacidade2 , populacao2);
        printf("A Carta 01 perdeu! %s %d \n", nomedacidade1 , populacao1); 
    }
        
       return 0;
}

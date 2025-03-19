#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    char Estado1[10], Estado2[10];
    char Codigocarta1[3], Codigocarta2[3];
    char nomedacidade1[10], nomedacidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float resultadoden1, resultadoden2, resultadopib1, resultadopib2;
    int escolhaAtributo1, escolhaAtributo2;
    
    /*printf("Digite o Estado da primeira carta: ");
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

    printf("Estado:  %s\n", Estado1);
    printf("Carta 01:  %s\n", Codigocarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    resultadoden1 = (float)populacao1 / area1;

    printf("Densidade populacional Carta 01:%d/ %.2f = %.2f",populacao1, area1, resultadoden1);
   
    Cálculo do PIB per capita carta 01

    resultadopib1 = pib1 / populacao1;

    printf("O PIB per capita Carta 01: %f / %d = %d", &pib1, &populacao1, &resultadopib1);
    scanf("%d / %f", &resultadopib1);

    printf("\nDigite o Estado da segunda carta: ");
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

    printf("Estado: %s\n", Estado2);
    printf("Carta 02: %s\n", Codigocarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    Cálculo da densidade populacional carta 02

    resultadoden2 = populacao2 / area2;

    printf("Densidade populacional Carta 02:%d / %.2f = %.2f", populacao2, area2, resultadoden2);
    
    Cálculo do PIB per capita carta 02

    resultadopib2 = pib2 / populacao2;

    printf("O PIB per capita Carta 02: %f / %d = %d", &pib2, &populacao2, &resultadopib2);
    scanf("%d / %f", &resultadopib2);

    Comparando um atributo: população

    if(populacao1> populacao2){
       printf("\nCarta 01 tem a maior população!\n");
    }else{
        printf("\nCarta 02 tem a maior população!\n");
    }

    Carta vencedora: comparação do atributo e exibição do resultado

    if(populacao1> populacao2){
        printf("Resultado:\n");
        printf("A Carta 01 venceu! %s %d \n", nomedacidade1 , populacao1);
        printf("A Carta 02 perdeu! %s %d \n", nomedacidade2 , populacao2);       
    }else{
        printf("Resultado:\n");
        printf("A Carta 02 venceu! %s %d \n", nomedacidade2 , populacao2);
        printf("A Carta 01 perdeu! %s %d \n", nomedacidade1 , populacao1); 
    }
        

    // desafio super trunfo nivel aventureiro: menu interativo e comparaçãos dos atributos
    // Obs.: Estou comentando as etapas executadas nos desafios anteriores para não deletar o código.

    printf("###Super Trunfo\n");
    printf("Escolha uma opção de atributo para comparação:\n");
    printf("1. Estado\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo) {
        case 1:
          printf("Atributo escolhido: Estado\n");
          printf("Escolha outro atributo para comparação!");
        break;
        case 2:
          printf("Atributo escolhido: População\n");
          if(populacao1 == populacao2){
            printf("Empate");
          }else if (populacao1 > populacao2){
            printf("Carta 01 venceu!");
        }else{
          printf("Carta 02 venceu!");
        }
          printf("\n###Resultado final###");
          printf("\nEstados: %s %s\n", Estado1, Estado2);
          printf("O atributo comparado foi: População\n");
          printf("População de cada cidade: %d %d \n ", populacao1, populacao2);
        break;
        case 3:
        printf("Atributo escolhido: Área\n");
        if(area1 == area2){
          printf("Empate");
        }else if (area1 > area2){
          printf("Carta 01 venceu!");
        }else{
        printf("Carta 02 venceu!");
        }
        printf("\n###Resultado final###");
        printf("\nEstados: %s %s\n", Estado1, Estado2);
        printf("O atributo comparado foi: Área\n");
        printf("Área de cada cidade: %f %f \n ", area1, area2);
        break;
        case 4:
        printf("Atributo escolhido: PIB\n");
        if(pib1 == pib2){
          printf("Empate");
        }else if (pib1 > pib2){
          printf("Carta 01 venceu!");
        }else{
        printf("Carta 02 venceu!");
        }
        printf("\n###Resultado final###");
        printf("\nEstados: %s %s\n", Estado1, Estado2);
        printf("O atributo comparado foi: PIB\n");
        printf("PIB de cada cidade: %f %f \n ", pib1, pib2);
        break;
        case 5:
        printf("Atributo escolhido: Pontos Turisticos\n");
        if(pontosturisticos1 == pontosturisticos2){
          printf("Empate");
        }else if (pontosturisticos1 > pontosturisticos2){
          printf("Carta 01 venceu!");
        }else{
        printf("Carta 02 venceu!");
        }
        printf("\n###Resultado final###");
        printf("\nEstados: %s %s\n", Estado1, Estado2);
        printf("O atributo comparado foi: Pontos Turisticos\n");
        printf("Quantide de pontos turisticos de cada cidade: %d %d \n ", pontosturisticos1, pontosturisticos2);
        break;
        case 6:
        printf("Atributo escolhido: Densidade demográfica\n");
        if(resultadoden1 == resultadoden2){
          printf("Empate");
        }else if (resultadoden1 > resultadoden2){
          printf("Carta 02 venceu!");
        }else{
        printf("Carta 01 venceu!");
        }
        printf("\n###Resultado final###");
        printf("\nEstados: %s %s\n", Estado1, Estado2);
        printf("O atributo comparado foi: Densidade demográfica\n");
        printf("Densidade demográfica de cada cidade: %f %f \n ", resultadoden1, resultadoden2);
        break;
        default:
          printf("Opção inválida. Tente novamente.\n");
        break;
      }
     */

    // desafio super trunfo nivel mestre: Implementando Comparações Avançadas com Atributos Múltiplos em C
    // Obs.: Estou comentando as etapas executadas nos desafios anteriores para não deletar o código.
    
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
    
    printf("\nDigite o Estado da segunda carta: ");
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

    printf("###Super Trunfo###\n");
    printf("Escolha a primeira opção de atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &escolhaAtributo1);
    

     switch (escolhaAtributo1) {
     case 1:
     printf("Atributo escolhido: População\n");
     populacao1 > populacao2 ? printf("Carta 01 venceu!") : printf("Carta 02 venceu!\n");
     break;

     case 2:
     printf("Atributo escolhido: Área\n");
     area1 > area2 ? printf("Carta 01 venceu!") : printf("Carta 02 venceu!\n");
     break;
     
     case 3: 
     printf("Atributo escolhido: PIB\n");
     area1 > area2 ? printf("Carta 01 venceu!") : printf("Carta 02 venceu!\n");
     break;
     
     case 4:
     printf("Atributo escolhido: Pontos Turísticos\n");
     pontosturisticos1 > pontosturisticos2 ? printf("Carta 01 venceu!") : printf("Carta 02 venceu!\n");
     break;

     case 5:
     printf("Atributo escolhido: Densidade demográfica\n");
     resultadoden1 > resultadoden2? printf("Carta 02 venceu!") : printf("Carta 01 venceu!\n");
     break;
     
     default:
     printf("\nOpção inválida. Tente novamente.\n");
     break;
    }

    printf("Escolha a segunda opção de atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &escolhaAtributo2);

    switch (escolhaAtributo2){
      case 1:
      if(escolhaAtributo2 == escolhaAtributo1){
      printf("Atributo já escolhido, selecione outro para comparação!\n"); 
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Pontos turísticos\n");
      printf("5. Densidade demográfica\n");
      printf("Escolha uma opção: \n");
      scanf("%d", &escolhaAtributo2);
      }else{
      printf("Atributo escolhido: %d", escolhaAtributo2); 
      }
     break;

     case 2:
     if(escolhaAtributo2 == escolhaAtributo1){
      printf("Atributo já escolhido, selecione outro para comparação!\n"); 
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Pontos turísticos\n");
      printf("5. Densidade demográfica\n");
      printf("Escolha uma opção: \n");
      scanf("%d", &escolhaAtributo2);
      }else{
      printf("Atributo escolhido: %d", escolhaAtributo2); 
      }
     break;
     
     case 3: 
     if(escolhaAtributo2 == escolhaAtributo1){
        printf("Atributo já escolhido, selecione outro para comparação!\n"); 
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &escolhaAtributo2);
        }else{
        printf("Atributo escolhido: %d", escolhaAtributo2); 
       }
     break;
     
     case 4:
     if(escolhaAtributo2 == escolhaAtributo1){
      printf("Atributo já escolhido, selecione outro para comparação!\n"); 
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Pontos turísticos\n");
      printf("5. Densidade demográfica\n");
      printf("Escolha uma opção: \n");
      scanf("%d", &escolhaAtributo2);
      }else{
      printf("Atributo escolhido: %d", escolhaAtributo2); 
     }
     break;

     case 5:
     if(escolhaAtributo2 == escolhaAtributo1){
      printf("Atributo já escolhido, selecione outro para comparação!\n"); 
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Pontos turísticos\n");
      printf("5. Densidade demográfica\n");
      printf("Escolha uma opção: \n");
      scanf("%d", &escolhaAtributo2);
      }else{
      printf("Atributo escolhido: %d", escolhaAtributo2); 
      }
     break;
     
     default:
     printf("\nOpção inválida. Tente novamente.\n");
     break;
    
   }
       return 0;
   
}

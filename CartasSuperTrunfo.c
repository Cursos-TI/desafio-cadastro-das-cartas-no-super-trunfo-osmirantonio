    #include <stdio.h>
    #include <string.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1,superPoder1;
    
    // Leitura dos dados da primeira carta
    printf("Digite o estado da cidade 1:");
    scanf("%s", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade 1: ");

    getchar();  // Limpar o buffer de entrada
    fgets(nomeCidade1, 50, stdin);  // Usar fgets para ler até a nova linha
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;  // Remover a quebra de linha no final da string

    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacao1);  // Corrigido para %lu
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1; // Convertendo PIB de bilhões para reais

    // Cálculo do Super Poder 
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + (1.0 / densidadePopulacional1);
   
    // Declaração das variáveis para a segunda carta
    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

     // Leitura dos dados da segunda carta
    printf("Digite o estado da cidade 2: ");
    scanf("%s", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade 2: ");

    getchar();  // Limpar o buffer de entrada
    fgets(nomeCidade2, 50, stdin);  // Usar fgets para ler até a nova linha
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;  // Remover a quebra de linha no final da string

    
    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);  // Corrigido para %lu
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

     // Cálculo da densidade populacional e PIB per capita para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2; // Convertendo PIB de bilhões para reais

    // Cálculo do SuperPoder
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + (1.0 / densidadePopulacional2);

     // Exibição das comparações com if e else
     printf("\nComparacao de Cartas:\n");

     if (populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n");
     } else{
        printf("População: Carta 2 Venceu\n");
     }

     if (area1 > area2){
        printf("Área: Carta 1 venceu!\n");
     } else{
        printf("Área: Carta 2 Venceu\n");
     }

     if (pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
     } else{
        printf("PIB: Carta 2 Venceu\n");
     }

     if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turisticos: Carta 1 venceu!\n");
     } else{
        printf("Pontos Turisticos: Carta 2 Venceu\n");
     }

     if (densidadePopulacional1 > densidadePopulacional2){
        printf("Densidade Populacional: Carta 1 venceu!\n");
     } else{
        printf("Densidade Populacional: Carta 2 Venceu\n");
     }

     if (pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: Carta 1 venceu!\n");
     } else{
        printf("Pib per Capita: Carta 2 Venceu\n");
     }
     
     if (superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu!\n");
     } else{
        printf("Super Poder: Carta 2 Venceu\n");
     }
    


     return 0;

}
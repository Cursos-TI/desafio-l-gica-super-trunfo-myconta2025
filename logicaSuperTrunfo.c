#include <stdio.h>

int main() {

    //especificando o tipo e o nome da variável de duas cartas
    char estado1 [20], estado2 [20];
    char codigo1 [4], codigo2 [4];
    char nomeCidade1 [20], nomeCidade2 [20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibperCapita1, pibperCapita2;
    float superPoder1, superPoder2;

    //entrando com os dados da primeira carta
    printf("**Cadastro da Carta1** \n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);


    //entrando com os dados da segunda carta
    printf("\n**Cadastro da Carta2** \n");
    printf("Digite o Estado: \n");
    scanf(" %s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //cáculos da densidade e do PIB per capita da Carta1 e Carta2
    densidade1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1; 
    
    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;

    //Menu de opções para comparação
    int opcao;
    printf("\n**Escolha o atributo para comparar** \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos turísticos \n");
    printf("5 - Densidade demográfica \n");
    printf("6 - PIB per capita \n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s: \n", nomeCidade1, nomeCidade2);

    switch(opcao) {
        case 1://população
            printf("População: %lu vs %lu \n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s \n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s \n", nomeCidade2);
            else
                printf("Empate! \n");
            break;

        case 2://área
            printf("Área: %f km2 vs %f km2 \n", area1, area2);
            if (area1 > area2)
                printf("Vencedora: %s \n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedora: %s \n", nomeCidade2);
            else
                printf("Empate! \n");
            break;

        case 3://PIB
            printf("PIB: %f bilhões vs %f bilhões \n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s \n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s \n", nomeCidade2);
            else
                printf("Empate! \n");
            break;

        case 4://pontos turísticos
            printf("Pontos turísticos: %d vs %d \n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s \n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s \n", nomeCidade2);
            else
                printf("Empate! \n");
            break;

        case 5: //densidade demográfica, menor vence!
            printf("Densidade: %f hab/km2 vs %f hab/km2 \n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedora: %s \n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: %s \n", nomeCidade2);
            else
                printf("Empate! \n");
            break;
        
        case 6://PIB per capita
            printf("PIB per capita: %f bilhões vs %f bilhões \n", pibperCapita1, pibperCapita2);
            if (pibperCapita1 > pibperCapita2)
                printf("Vencedora: %s \n", nomeCidade1);
            else if (pibperCapita2 > pibperCapita1)
                printf("Vencedora: %s \n", nomeCidade2);
            else
                printf("Empate! \n");

        default:
            printf("Opção inválida! \n");
            break;
    }

    return 0;
}


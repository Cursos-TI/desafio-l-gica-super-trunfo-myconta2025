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

    //comparação entre a carta 1 e 2, atributo população
    printf("\n**Comparação de cartas -- atributo: população** \n");
    printf("Carta 1 -- %s, %s: %d \n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 -- %s, %s: %d \n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2){
        printf("Carta 1 -- %s: venceu! \n", nomeCidade1);

    }else {
        printf("Carta 2 -- %s: venceu! \n", nomeCidade2);
    }
}

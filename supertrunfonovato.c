#include <stdio.h>

int main () {
    //Cadastrando as cartas
    char estado1[20];
    char estado2[20];
    char codigo1[5];
    char codigo2[5];
    char cidade1[20];
    char cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turistico1, turistico2;
    
    //Informações da carta 1
    printf("Digite o Estado 1: \n");
    scanf("%19s", &estado1);

    printf("Digite o codigo da carta do Estado 1: \n");
    scanf("%4s", &codigo1);

    printf("Digite a cidade do Estado 1: \n");
    scanf("%19s", &cidade1);

    printf("Digite a população do Estado 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do Estado 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do Estado 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turísticos do Estado 1: \n");
    scanf("%d", &turistico1);

    //Informações da carta 2
    printf("Digite o Estado 2: \n");
    scanf("%19s", &estado2);

    printf("Digite o codigo da carta do Estado 2: \n");
    scanf("%4s", &codigo2);

    printf("Digite a cidade do Estado 2: \n");
    scanf("%19s", &cidade2);

    printf("Digite a população do Estado 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área do Estado 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do Estado 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos do Estado 2: \n");
    scanf("%d", &turistico2);

    //Imprimindo as cartas
    printf("Carta1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos turísticos: %d \n\n\n", turistico1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos turísticos: %d \n", turistico2);

    return 0;
}
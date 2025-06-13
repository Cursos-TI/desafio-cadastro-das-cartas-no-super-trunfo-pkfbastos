#include <stdio.h>

int main () {
    //Cadastrando as cartas
    
    char estado1[20], estado2[20];
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int ponto_turistico1, ponto_turistico2;
    
    //Informações da carta 1
    printf("Digite o Estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta do Estado 1: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade do Estado 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a população do Estado 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do Estado 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do Estado 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turísticos do Estado 1: \n");
    scanf("%f", &ponto_turistico1);

    printf("Digite o Estado 2: \n");
    scanf("%sn", &estado2);

    printf("Digite o codigo da carta do Estado 2: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade do Estado 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a população do Estado 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área do Estado 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do Estado 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos do Estado 2: \n");
    scanf("%f", &ponto_turistico2);


    //Imprimindo as cartas
    printf("Carta1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f \n", PIB1);
    printf("Número de Pontos turísticos: %f \n", ponto_turistico1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Número de Pontos turísticos: %f \n", ponto_turistico2);

    return 0;



}

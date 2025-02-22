#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.[]

    /*------------Variaveis carta 1------------*/
    //carta 1
    char Estado1;
    char codigoDaCarta1[5], nomeDaCidade1[20];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    /*------------Variaveis carta 2------------*/
    //carta 2
    char Estado2;
    char codigoDaCarta2[5], nomeDaCidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    /*------------Scan Carta 1------------*/
    printf("\n ---- Cadastro da carta 1 ---- \n\n");

    //Letra da carta 1
    printf("\n insira uma letra de A a H para representar o Estado: ");
    scanf(" %c", &Estado1);
    
    //Codigo da carta 1
    printf("\ninsira agora um codigo para letra de 01 a 04: ");
    scanf("%s",codigoDaCarta1);

    //Nome da cidade carta 1
    printf("\ninsira o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1);

    //População carta 1
    printf("\ninsira a quantidade da população: ");
    scanf("%d", &populacao1);

    //área carta 1
    printf("\ninsira a area da cidade: ");
    scanf("%f", &area1);

    //Pib carta 1
    printf("\ninsira o pib da cidade: ");
    scanf("%f", &pib1);

    //Ponto turístico carta 1
    printf("\ninsira o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /*------------Scan Carta 2------------*/
    printf("\n ---- Cadastro da carta 2 ---- \n\n");

    //Letra da carta 2
    printf("\ninsira uma letra de A a H para representar o Estado: ");
    scanf(" %c", &Estado2);
    
    //Codigo da carta 2
    printf("\ninsira agora um codigo para letra de 01 a 04: ");
    scanf("%s",codigoDaCarta2);

    //Nome da cidade carta 2
    printf("\ninsira o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    //População carta 2
    printf("\ninsira a quantidade da população: ");
    scanf("%d", &populacao2);

    //área carta 2
    printf("\ninsira a area da cidade: ");
    scanf("%f", &area2);

    //Pib carta 2
    printf("\ninsira o pib da cidade: ");
    scanf("%f", &pib2);

    //Ponto turístico carta 2
    printf("\ninsira o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /*------------printar na Tela carta 1------------*/

    printf("\nEstado: %c \n",Estado1);
    printf("Código da carta: %c%s \n", Estado1, codigoDaCarta1);
    printf("Nome da cidade: %s \n", nomeDaCidade1);
    printf("população: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhóes de Reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1);

    /*------------printar na Tela carta 2------------*/

    printf("\nEstado: %c \n",Estado2);
    printf("Código da carta: %c%s \n", Estado2, codigoDaCarta2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("população: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhóes de Reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    
    return 0;
}

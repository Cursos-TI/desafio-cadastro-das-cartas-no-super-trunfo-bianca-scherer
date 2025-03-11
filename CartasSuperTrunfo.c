#include <stdio.h>
    // Tema Novato - cadastro de duas cartas

int main() {

    printf("Desafio Super Trunfo \n");

    // Defição de variáveis:

    char estado1, estado2;                                           // variavel para letra de 'A' a 'H' simbolizando o estado
    char codigo_estado1[5], codigo_estado2[5];                       // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade1[20], nome_cidade2[20];                         // Nome da cidade
    int populacao_cidade1, populacao_cidade2;                        // O número de habitantes da cidade
    float area_cidade1, area_cidade2;                                // A área da cidade em quilômetros quadrados
    float PIB_cidade1, PIB_cidade2;                                  // O Produto Interno Bruto da cidade
    int pontosturisticos_cidade1, pontosturisticos_cidade2;          // A quantidade de pontos turísticos na cidade
    
    // Cadastro das Cartas:

    //Informações de cadastro da primeira carta:

    printf ("Digite uma letra de A a H para definir o primeiro estado: \n");
    scanf(" %c", &estado1);
    printf ("Digite a letra do primeiro estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo_estado1);
    printf ("Digite o nome da primeira cidade: \n");
    scanf("%s", nome_cidade1);
    printf ("Digite o número de habitantes da primeira cidade: \n");
    scanf("%d", &populacao_cidade1);
    printf ("Digite a área da primeira cidade em quilômetros quadrados: \n");
    scanf("%f", &area_cidade1);
    printf ("Digite o Produto Interno Bruto da primeira cidade: \n");
    scanf("%f", &PIB_cidade1);
    printf ("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontosturisticos_cidade1);


    //Informações de cadastro da segunda carta:
    
    printf ("Digite uma letra de A a H para definir o segundo estado: \n");
    scanf(" %c", &estado2);
    printf ("Digite a letra do segundo estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo_estado2);
    printf ("Digite o nome da segunda cidade: \n");
    scanf("%s", nome_cidade2);
    printf ("Digite o número de habitantes da segunda cidade: \n");
    scanf("%d", &populacao_cidade2);
    printf ("Digite a área da segunda cidade em quilômetros quadrados: \n");
    scanf("%f", &area_cidade2);
    printf ("Digite o Produto Interno Bruto da segunda cidade: \n");
    scanf("%f", &PIB_cidade2);
    printf ("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos_cidade2);


    // Exibição dos Dados das Cartas:


    printf ("\n INFORMAÇÕES DA PRIMEIRA CARTA \n");
    printf("A letra do primeiro estado é: %c\n", estado1);
    printf("O código do primeiro estado é: %s\n", codigo_estado1);
    printf("O nome da primeira cidade é: %s\n", nome_cidade1);
    printf("A população da primeira cidade é: %d\n", populacao_cidade1);
    printf("A area da primeiro cidade em km² é: %.2f\n", area_cidade1 );
    printf("O Produto Interno Bruto da primeira cidade é: %.2f\n", PIB_cidade1);
    printf("A quantide de pontos turisticos da primeira cidade é: %d\n", pontosturisticos_cidade1);

    printf ("\n INFORMAÇÕES DA SEGUNDA CARTA: \n");
    printf("A letra do segundo estado é: %c\n", estado2);
    printf("O código do segundo estado é: %s\n", codigo_estado2);
    printf("O nome da segunda cidade é: %s\n", nome_cidade2);
    printf("A população da segunda cidade é: %d\n", populacao_cidade2);
    printf("A area da segunda cidade em km² é: %.2f\n", area_cidade2);
    printf("O Produto Interno Bruto da segunda cidade é: %.2f\n", PIB_cidade2);
    printf("A quantide de pontos turisticos da segunda cidade é: %d\n", pontosturisticos_cidade2);

    return 0;
}

#include <stdio.h>

int main(){

    char estado1[2], estado2[2]; //sigla conforme IBGE
    char codigo1[04], codigo2[4];//formado pela sigla estadual + dois números, iniciando em 01 até 04
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;//total da população conforme dados do IBGE 2022
    float area1, area2; // conforme dados do IBGE em 2022
    float pib1, pib2; // conforme dados do IBGE em 2022
    int pontoturistico1, pontoturistico2; //pesquisas na internet

    //Obtendo as características da carta 01

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("digite o código da carta: \n ");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: \n ");
    scanf("%s", cidade1);

    printf("digite a população: \n ");
    scanf("%d", &populacao1);

    printf("digite a area: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &pib1);

    printf("digite o total de pontos turísticos: \n");
    scanf("%d", &pontoturistico1);

    printf("Carta 1:\n Estado:  %s\n Código da carta: %s\n", estado1, codigo1);
    printf("Cidade: %s\n População: %d\n",cidade1, populacao1); 
    printf("Área: %f\n PIB %f\n", area1, pib1);
    printf("Pontos turísticos %d\n", pontoturistico1);        
    
    //Obtendo as características da carta 02

    printf("Caracterísitcas da carta 2\n");
    
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("digite o código da carta: \n ");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n ");
    scanf("%s", cidade2);

    printf("digite a população: \n ");
    scanf("%d", &populacao2);

    printf("digite a area: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &pib2);

    printf("digite o total de pontos turísticos: \n");
    scanf("%d", &pontoturistico2);

    printf("Carta 2:\n Estado:  %s\n Código da carta: %s\n", estado2, codigo2);
    printf("Cidade: %s\n População: %d\n",cidade2, populacao2); 
    printf("Área: %f\n PIB %f\n", area2, pib2);
    printf("Pontos turísticos %d\n", pontoturistico2);        

    
    return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
     
    char estado1[2];//sigla do estado da carta 1 conforme IBGE
    char estado2[2]; //sigla do estado da carta 2conforme IBGE 
    char codigo1[4]; //formado pela sigla estadual da carta 1 + dois números, iniciando em 01 até 04 
    char codigo2[4];//formado pela sigla estadual da carta 1 + dois números, iniciando em 01 até 04 
    char cidade1[50];//cidade da carta 1
    char cidade2[50];// cidade da carta 2
    unsigned long int populacao1;//total da população da carta 1 conforme dados do IBGE 2022 
    unsigned long int populacao2;//total da população da carta 2conforme dados do IBGE 2022 
    float area1; // área da cidade da carta 1 conforme dados do IBGE 2022
    float area2; // área da cidade da carta 2 conforme dados do IBGE em 2022 
    float pib1;//PIB da cidade 1 conforme dados do IBGE em 2022
    float pib2; // PIB da cidade 2 conforme dados do IBGE em 2022 
    int pontoturistico1; //total de pontos turísticos da cidade 1.
    int pontoturistico2; //total de pontos turisticos da cidade 2
    float densidade1; //densidade da cidade da carta 1. população \ área
    float densidade2; //densidade da cidade da carta 2. população \ área
    float PIB_per_capta1; //Pib per capta da cidade 1. PIB x população
    float PIB_per_capta2; //Pib per capta da cidade 2. PIB x população
    float superPoder1;//super poder da carta 1: somatório de todos os atributos numéricos. 
    float superPoder2;//super poder da carta 1: somatório de todos os atributos numéricos.
    int atributo1, atributo2, atributo3;//número que identifica os atributos das cartas
    int pontosAcumuladosCarta1 = 0;//soma os pontos acumulados da carta 1 nas comparações do jogo
    int pontosAcumuladosCarta2 = 0;//soma os pontos acumulados da carta 2 nas comparações do jogo
    int pontosAcumuladosEmpate = 0;////soma os pontos acumulados para empate nascomparações do jogo
      
    //Obtendo os atributos da carta 01 
    printf("atributos da carta 1:\n"); 
    printf("Digite o estado: \n"); 
    scanf("%s", estado1); 
    printf("digite o código da carta: \n"); 
    scanf("%s", codigo1); 
    printf("digite o nome da cidade: \n"); 
    scanf("%s", cidade1); 
    printf("digite a população: \n"); 
    scanf("%ld", &populacao1); 
    printf("digite a area: \n"); 
    scanf("%f", &area1); 
    printf("digite o PIB: \n"); 
    scanf("%f", &pib1); 
    printf("digite o total de pontos turísticos: \n"); 
    scanf("%d", &pontoturistico1);
    printf("\n");    
    printf("Atributos da carta 1:\nEstado:%s\nCódigo da carta:%s\n", estado1, codigo1); 
    printf("Cidade:%s\nPopulação:%.2d\n",cidade1, populacao1);  
    printf("Área:%.2f\nPIB:%.2f\n", area1, pib1); 
    printf("Pontos turísticos:%d\n", pontoturistico1); 
    densidade1 = populacao1 / area1; 
    PIB_per_capta1 = pib1/populacao1; 
    superPoder1 = (1/densidade1) + PIB_per_capta1 + populacao1 + pib1 + area1 + pontoturistico1; 
    printf("A densidade demográfica da cidade de %s é:%.2f\n", cidade1, densidade1); 
    printf("O PIB Per capta da cidade de %s é:%.2f\n", cidade1, PIB_per_capta1); 
    printf("o SuperPoder é:%.2f", superPoder1);
    printf("\n"); 
    printf("\n");
 
    //Obtendo os atributos da carta 02 
    printf("atributos da carta 2:\n"); 
    printf("Digite o estado: \n"); 
    scanf("%s", estado2); 
    printf("digite o código da carta: \n"); 
    scanf("%s", codigo2); 
    printf("digite o nome da cidade: \n"); 
    scanf("%s", cidade2); 
    printf("digite a população: \n"); 
    scanf("%ld", &populacao2); 
    printf("digite a area: \n"); 
    scanf("%f", &area2); 
    printf("digite o PIB: \n"); 
    scanf("%f", &pib2); 
    printf("digite o total de pontos turísticos: \n"); 
    scanf("%d", &pontoturistico2);
    printf("\n");    
    printf("Atributos da carta 2:\nEstado:%s\nCódigo da carta:%s\n", estado2, codigo2); 
    printf("Cidade:%s\nPopulação:%.2d\n",cidade2, populacao2);  
    printf("Área:%.2f\nPIB:%.2f\n", area2, pib2); 
    printf("Pontos turísticos:%d\n", pontoturistico2); 
    densidade2 = populacao2 / area2; 
    PIB_per_capta2 = pib2/populacao2; 
    superPoder2 = (1/densidade2) + PIB_per_capta2 + populacao2 + pib2 + area2 + pontoturistico2; 
    printf("A densidade demográfica da cidade de %s é:%.2f\n", cidade2, densidade2); 
    printf("O PIB Per capta da cidade de %s é:%.2f\n", cidade2, PIB_per_capta2); 
    printf("o SuperPoder é:%.2f", superPoder2);
    printf("\n");
    printf("\n"); 
    printf("***iniciando o jogo SuperTrunfo***\n");
    printf("serão realizadas 3 comparações de atributos.\n");
    printf("Cada comparação vale 1 ponto.\n");
    printf("Quem fizer o maior número de pontos ganhará o jogo.\n");
    printf("Opções de atributos: \n");
    printf("1 - Area\n2 - Populacao\n3 - PIB\n4 - PIB per capta\n5 - Densidade\n6 - Pontos turísticos\n7 - SuperPoder");
    printf("\n");
    printf("escolha o primeiro atributo: ");
    scanf("%d", &atributo1);
    printf("\n");
    while (atributo1<1 || atributo1>7)
    {
        printf("opção inválida. Estolha outro Atributo!\n");
        
        printf("escolha novamente o primeiro atributo: ");
        scanf("%d", &atributo1);
    }
    
    
    switch (atributo1)
    {
    case 1:
        printf("o primeiro atributo  escolhido para comparação foi: Área.\n");
        printf("Na carta 1 a cidade de %s possui uma área de: %.2f.\n", cidade1, area1);
        printf("Na carta 2 a cidade de %s possui uma área de %.2f.\n", cidade2, area2);
        if (area1>area2)
        {
            printf("A cidade de %s possui uma área maior. Portanto a carta 1 venceu e acumulou um ponto.\n", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(area1<area2){
            printf("A cidade de %s possui uma área maior. Portanto a carta 2 venceu e acumulou um ponto.\n", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma área. Portanto houve um empate.\n", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;  
    case 2:
        printf("o primeiro atributo  escolhido para comparação foi: População.\n");
        printf("Na carta 1 a cidade de %s possui uma População de: %ld.\n", cidade1, populacao1);
        printf("Na carta 2 a cidade de %s possui uma População de %2ld.\n", cidade2, populacao2);
        if (populacao1>populacao2)
        {
            printf("A cidade de %s possui uma área maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(populacao1<populacao2){
            printf("A cidade de %s possui uma populacão maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma População. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;   
    case 4:
        printf("o primeiro atributo  escolhido para comparação foi: PIB Per capta.\n");
        printf("Na carta 1 a cidade de %s possui um PIB Per capta de: %.2f.\n", cidade1, PIB_per_capta1);
        printf("Na carta 2 a cidade de %s possui um PIB Per capta de: %.2f.\n", cidade2, PIB_per_capta2);
        if (pib1>pib2)
        {
            printf("A cidade de %s possui um PIB Per capta maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pib1<pib2){
            printf("A cidade de %s possui um PIB Per capta maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem o mesmo PIB Per capta. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;   
    case 3:
        printf("o primeiro atributo  escolhido para comparação foi: PIB.\n");
        printf("Na carta 1 a cidade de %s possui um PIB de: %.2f.\n", cidade1, pib1);
        printf("Na carta 2 a cidade de %s possui um PIB de %.2f.\n", cidade2, pib2);
        if (pib1>pib2)
        {
            printf("A cidade de %s possui um PIB maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pib1<pib2){
            printf("A cidade de %s possui um PIB maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem o mesmo PIB. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 5:
        printf("o primeiro atributo  escolhido para comparação foi: Densidade.\n");
        printf("Na carta 1 a cidade de %s possui uma Densidade de: %.2f.\n", cidade1, densidade1);
        printf("Na carta 2 a cidade de %s possui uma  Densidade de: %.2f.\n", cidade2, densidade2);
        if (densidade1<densidade2)
        {
            printf("A cidade de %s possui uma densidade menor . Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(densidade2<densidade1){
            printf("A cidade de %s possui uma Densidade menor. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma Densidade. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 6:
        printf("o primeiro atributo  escolhido para comparação foi: Pontos turísticos.\n");
        printf("Na carta 1 a cidade de %s possui %d Pontos turísticos.\n", cidade1, pontoturistico1);
        printf("Na carta 2 a cidade de %s possui %d Pontos turísticos.\n", cidade2, pontoturistico2);
        if (pontoturistico1>pontoturistico2)
        {
            printf("A cidade de %s possui mais Pontos turísticos. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pontoturistico1<pontoturistico2){
            printf("A cidade de %s possui mais pontos turísticos. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma quantidade de pontos turísticos. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 7:
        printf("o primeiro atributo  escolhido para comparação foi: Super Poder.\n");
        printf("Na carta 1 a cidade de %s possui um super poder de %.2f pontos.\n", cidade1, superPoder1);
        printf("Na carta 2 a cidade de %s possui um super poder de %.2f pontos.\n", cidade2, superPoder2);
        if (superPoder1>superPoder2)
        {
            printf("o Super poder da cidade de %s possui mais pontos.Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(superPoder1<superPoder2){
            printf("A cidade de %s possui mais pontos no atributo super poder. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma quantidade de pontos no atributo super poder. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
        
    }
    printf("\n");
    printf("\n");
    printf("escolha o Segundo atributo: ");
    scanf("%d", &atributo2);

    while (atributo2<1 || atributo2>7)
    {
        printf("opção inválida. Estolha outro Atributo!\n");
        
        printf("escolha novamente o segundo atributo: ");
        scanf("%d", &atributo2);
    }

    while (atributo2==atributo1)
    {
        printf("Atenção! Você já utilizou esta opção anteriormente.\nEscolha outra opção!\n");
        printf("\n");
        printf("escolha o Segundo atributo: \n");
        scanf("%d", &atributo2);
    }
    
    
    printf("\n");

    switch (atributo2)
    {
    case 1:
        printf("o segundo atributo  escolhido para comparação foi: Área.\n");
        printf("Na carta 1 a cidade de %s possui uma área de: %.2f.\n", cidade1, area1);
        printf("Na carta 2 a cidade de %s possui uma área de %.2f.\n", cidade2, area2);
        if (area1>area2)
        {
            printf("A cidade de %s possui uma área maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(area1<area2){
            printf("A cidade de %s possui uma área maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma área. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;  
    case 2:
        printf("o segundo atributo  escolhido para comparação foi: População.\n");
        printf("Na carta 1 a cidade de %s possui uma População de: %ld.\n", cidade1, populacao1);
        printf("Na carta 2 a cidade de %s possui uma População de %ld.\n", cidade2, populacao2);

        if (populacao1>populacao2)
        {
            printf("A cidade de %s possui uma área maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(populacao1<populacao2){
            printf("A cidade de %s possui uma populacão maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma População. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;   
    case 4:
        printf("o segundo atributo  escolhido para comparação foi: PIB Per capta.\n");
        printf("Na carta 1 a cidade de %s possui um PIB Per capta de: %.2f.\n", cidade1, PIB_per_capta1);
        printf("Na carta 2 a cidade de %s possui um PIB Per capta de: %.2f.\n", cidade2, PIB_per_capta2);
        if (PIB_per_capta1>PIB_per_capta2)
        {
            printf("A cidade de %s possui um PIB Per capta maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(PIB_per_capta1<PIB_per_capta2){
            printf("A cidade de %s possui um PIB Per capta maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem o mesmo PIB Per capta. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;   
    case 3:
        printf("o segundo atributo  escolhido para comparação foi: PIB.\n");
        printf("Na carta 1 a cidade de %s possui um PIB de: %.2f.\n", cidade1, pib1);
        printf("Na carta 2 a cidade de %s possui um PIB de %.2f.\n", cidade2, pib2);

        if (pib1>pib2)
        {
            printf("A cidade de %s possui um PIB maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pib1<pib2){
            printf("A cidade de %s possui um PIB maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem o mesmo PIB. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 5:
        printf("o segundo atributo  escolhido para comparação foi: Densidade.\n");
        printf("Na carta 1 a cidade de %s possui uma Densidade de: %.2f.\n", cidade1, densidade1);
        printf("Na carta 2 a cidade de %s possui uma Densidade de: %.2f.\n", cidade2, densidade2);
        if (densidade1<densidade2)
        {
            printf("A cidade de %s possui uma densidade menor . Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(densidade2<densidade1){
            printf("A cidade de %s possui uma Densidade menor. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma Densidade. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 6:
        printf("o segundo atributo  escolhido para comparação foi: Pontos turísticos.\n");
        printf("Na carta 1 a cidade de %s possui %d Pontos turísticos.\n", cidade1, pontoturistico1);
        printf("Na carta 2 a cidade de %s possui %d Pontos turísticos.\n", cidade2, pontoturistico2);
        if (pontoturistico1>pontoturistico2)
        {
            printf("A cidade de %s possui mais Pontos turísticos. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pontoturistico1<pontoturistico2){
            printf("A cidade de %s possui mais pontos turísticos. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma quantidade de pontos turísticos. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 7:
        printf("o segundo atributo  escolhido para comparação foi: Super Poder.\n");
        printf("Na carta 1 a cidade de %s possui um super poder de %.2f pontos.\n", cidade1, superPoder1);
        printf("Na carta 2 a cidade de %s possui um super poder de %.2f pontos.\n", cidade2, superPoder2);
        if (superPoder1>superPoder2)
        {
            printf("o Super poder da cidade de %s possui mais pontos.Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(superPoder1<superPoder2){
            printf("A cidade de %s possui mais pontos no atributo super poder. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma quantidade de pontos no atributo super poder. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    }      
   
    printf("\n");
    printf("\n");
    printf("escolha o terceiro atributo: ");
    scanf("%d", &atributo3);
    while (atributo3<1 || atributo3>7)
    {
        printf("opção inválida. Estolha outro Atributo!\n");
        
        printf("escolha novamente o primeiro atributo: ");
        scanf("%d", &atributo3);
    }
    while (atributo3==atributo1 || atributo3==atributo2)
    {
        printf("Atenção! Você já utilizou esta opção anteriormente.\nEscolha outra opção!\n");
        printf("\n");
        printf("escolha o terceiro atributo: \n");
        scanf("%d", &atributo3);
    }          
       
    printf("\n");

    switch (atributo3)
    {
    case 1:
        printf("o terceiro atributo  escolhido para comparação foi: Área.\n");
        printf("Na carta 1 a cidade de %s possui uma área de: %.2f.\n", cidade1, area1);
        printf("Na carta 2 a cidade de %s possui uma área de %.2f.\n", cidade2, area2);
        if (area1>area2)
        {
            printf("A cidade de %s possui uma área maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(area1<area2){
            printf("A cidade de %s possui uma área maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma área. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;  
    case 2:
        printf("o terceiro atributo  escolhido para comparação foi: População.\n");
        printf("Na carta 1 a cidade de %s possui uma População de: %ld.\n", cidade1, populacao1);
        printf("Na carta 2 a cidade de %s possui uma População de %ld.\n", cidade2, populacao2);

        if (populacao1>populacao2)
        {
            printf("A cidade de %s possui uma área maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(populacao1<populacao2){
            printf("A cidade de %s possui uma populacão maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma População. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;   
    case 4:
        printf("o terceiro atributo escolhido para comparação foi: PIB Per capta.\n");
        printf("Na carta 1 a cidade de %s possui um PIB Per capta de: %.2f.\n", cidade1, PIB_per_capta1);
        printf("Na carta 2 a cidade de %s possui um PIB Per capta de: %.2f.\n", cidade2, PIB_per_capta2);
        if (PIB_per_capta1>PIB_per_capta2)
        {
            printf("A cidade de %s possui um PIB Per capta maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(PIB_per_capta1<PIB_per_capta2){
            printf("A cidade de %s possui um PIB Per capta maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem o mesmo PIB Per capta. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break;   
    case 3:
        printf("o terceiro atributo  escolhido para comparação foi: PIB.\n");
        printf("Na carta 1 a cidade de %s possui um PIB de: %.2f.\n", cidade1, pib1);
        printf("Na carta 2 a cidade de %s possui um PIB de %.2f.\n", cidade2, pib2);

        if (pib1>pib2)
        {
            printf("A cidade de %s possui um PIB maior. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pib1<pib2){
            printf("A cidade de %s possui um PIB maior. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem o mesmo PIB. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 5:
        printf("o terceiro atributo  escolhido para comparação foi: Densidade.\n");
        printf("Na carta 1 a cidade de %s possui uma Densidade de: %.2f.\n", cidade1, densidade1);
        printf("Na carta 2 a cidade de %s possui uma Densidade de: %.2f.\n", cidade2, densidade2);
        if (densidade1<densidade2)
        {
            printf("A cidade de %s possui uma densidade menor . Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(densidade2<densidade1){
            printf("A cidade de %s possui uma Densidade menor. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma Densidade. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 6:
        printf("o terceiro atributo  escolhido para comparação foi: Pontos turísticos.\n");
        printf("Na carta 1 a cidade de %s possui %d Pontos turísticos.\n", cidade1, pontoturistico1);
        printf("Na carta 2 a cidade de %s possui %d Pontos turísticos.\n", cidade2, pontoturistico2);
        if (pontoturistico1>pontoturistico2)
        {
            printf("A cidade de %s possui mais Pontos turísticos. Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(pontoturistico1<pontoturistico2){
            printf("A cidade de %s possui mais pontos turísticos. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma quantidade de pontos turísticos. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
    case 7:
        printf("o terceiro atributo  escolhido para comparação foi: Super Poder.\n");
        printf("Na carta 1 a cidade de %s possui um super poder de %.2f pontos.\n", cidade1, superPoder1);
        printf("Na carta 2 a cidade de %s possui um super poder de %.2f pontos.\n", cidade2, superPoder2);
        if (superPoder1>superPoder2)
        {
            printf("o Super poder da cidade de %s possui mais pontos.Portanto a carta 1 venceu e acumulou um ponto.", cidade1);
            pontosAcumuladosCarta1 = pontosAcumuladosCarta1+1;

        } else if(superPoder1<superPoder2){
            printf("A cidade de %s possui mais pontos no atributo super poder. Portanto a carta 2 venceu e acumulou um ponto.", cidade2);
            pontosAcumuladosCarta2= pontosAcumuladosCarta2+1;
        } else{
            printf("As cidades de %s e %s possuem a mesma quantidade de pontos no atributo super poder. Portanto houve um empate.", cidade1, cidade2);
            pontosAcumuladosEmpate = pontosAcumuladosEmpate+1;
        }
        
        break; 
        
    }
     
    printf("\n");
    printf("\n");
    printf("Resumo da pontuação do jogo:\n");
    printf("\n");
    if (pontosAcumuladosCarta1>pontosAcumuladosCarta2)
    {
        printf("A carta 1 fez %d ponto(s).\n", pontosAcumuladosCarta1);
        printf("A carta 2 fez %d ponto(s).\n", pontosAcumuladosCarta2);
        printf("Total de empates: %d.\n", pontosAcumuladosEmpate);
        printf("\n");
        printf("A carta 1 foi a vencedora!");
        printf("\n");
    } else if(pontosAcumuladosCarta1<pontosAcumuladosCarta2)
    {
        printf("A carta 1 fez %d ponto(s).\n", pontosAcumuladosCarta1);
        printf("A carta 2 fez %d ponto(s).\n", pontosAcumuladosCarta2);
        printf("Total de empates: %d.\n", pontosAcumuladosEmpate);
        printf("\n");
        printf("A carta 2 foi a vencedora!");
        printf("\n");
    } else
    {
        printf("A carta 1 fez %d ponto(s).\n", pontosAcumuladosCarta1);
        printf("A carta 2 fez %d ponto(s).\n", pontosAcumuladosCarta2);
        printf("Total de empates: %d.\n", pontosAcumuladosEmpate);
        printf("\n");
        printf("Não houve vencedores. Empate!!");
        printf("\n");
    }
    
}
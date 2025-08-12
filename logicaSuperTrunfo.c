#include <stdio.h>
//calcula PIB percapta e desidade
float pibpercapta(float pib, unsigned long int population){
    float pibperca = (pib  * 1000000000) / population;
    return pibperca;}
//calcula densidade
double desidade(unsigned long int population, float area){
    double densi = population / area;
    return densi;
}
//calcula super poder
double superPoder(unsigned long int population,  float area, float pib, int turist){
    //calcula inverso da densidade
    double densidade = 1/(desidade(population,area));

    float pibperc = pibpercapta(pib, population);

    double superPoder = population + area + pib + turist + densidade + pibperc;
    return superPoder;
}

int main(){

    char estado01, estado02;
    char codCard01[5],codCard02[5];
    char cardName01[50], cardName02[50];
    unsigned long int pulation01, pulation02;
    float area01, area02;
    float pib01, pib02;
    int turistpoint01, turistpoint02;

    //atribuindo valores para as variáveis da carta 01
    printf("Qual estado da carta 01?(digite uma letra entre A - H) \n");
    scanf("%c", estado01);
    printf("Qual código da cidade 01?(digite a letra do estado escolhida, seguida de um número entre 01-04) \n");
    scanf("%4s", codCard01);
    printf("Qual nome da cidade 01 ? \n");
    scanf("%49s", cardName01);
    printf("Qual a população da cidade 01? \n");
    scanf("%lu", &pulation01);
    printf("Qual a área da cidade 01?  \n");
    scanf("%f", &area01);
    printf("Qual o PIB da cidade 01? \n");
    scanf("%f", &pib01);
    printf("Quantos pontos turísticos tem a cidade 01? \n");
    scanf("%d", &turistpoint01);

    //atribuindo valores para as variáveis da carta 02
    printf("Qual estado da carta 02?(digite uma letra entre A - H) \n");
    scanf("%c", estado02);
    printf("Qual código da cidade 02?(digite a letra do estado escolhida, seguida de um número entre 01-04) \n");
    scanf("%4s", codCard02);
    printf("Qual nome da cidade 02 ? \n");
    scanf("%49s", cardName02);
    printf("Qual a população da cidade 02? \n");
    scanf("%lu", &pulation02);
    printf("Qual a área da cidade 02?  \n");
    scanf("%f", &area02);
    printf("Qual o PIB da cidade 02? \n");
    scanf("%f", &pib02);
    printf("Quantos pontos turísticos tem a cidade 02? \n");
    scanf("%d", &turistpoint02);
    
    printf("==============================================================\n");
    
    float densi01;
    float pperca01;
    double superA;
    //chama função de densidade populacional 01
    densi01 = desidade(pulation01, area01);
    pperca01 = pibpercapta(pib01, pulation01);
    superA = superPoder(pulation01, area01, pib01, turistpoint01);
    //exibe dados atributos da carta 01
    printf("Carta 01:\n");
    printf("Estado: %c\nCódigo: %s\n", estado01, codCard01);
    printf("Nome: %s\n", cardName01);
    printf("População: %lu\nArea: %.2f\n", pulation01, area01);
    printf("PIB: %.2f \nPontos Turísticos: %d\n", pib01, turistpoint01);
    printf("A desidade populacional é: %.2f\n", densi01);
    printf("O PIB per Capita: %.2f\n", pperca01 );
    printf ("Super-Poder A: %.2lf\n",superA);
    printf("==============================================================\n");

     float densi02;
     float pperca02;
    double superB;
    //chama função de densidade populacional 02
    densi02 = desidade(pulation02, area02);
    pperca02 = pibpercapta(pib02, pulation02);
    superB = superPoder(pulation02, area02, pib02, turistpoint02);
    //exibe dados atributos da carta 01
    printf("Carta 02:\n");
    printf("Estado: %c\nCódigo: %s\n", estado02, codCard02);
    printf("Nome: %s\n", cardName02);
    printf("População: %lu\nArea: %.2f\n", pulation02, area02);
    printf("PIB: %.2f \nPontos Turísticos: %d\n", pib02, turistpoint02);
    printf("A desidade populacional é: %.2f\n", densi02);
    printf("O PIB per Capita: %.2f\n", pperca02 );
    printf ("Super-Poder B: %.2lf\n",superB);
    printf("==============================================================\n");
    
    //permite escolher atributo para competir
    int atribut;
    printf("Escolha um atributo para as cartas competirem: \n");
    printf("1 - População \n2 - PIB \n3 - Densidade\n4- PIB per Capita\n 5- Área\n 6- Super Poder\n");
    scanf("%d", &atribut);
    
    //para cada atributo escolhido um case
    switch(atribut){
        case 1: 
        if(pulation01 > pulation02){
            printf("%s GANHOU com maior População\n", cardName01);
        } else if(pulation02 > pulation01){
            printf("%s GANHOU com maior População\n", cardName02);
        }else {
            printf("A População das duas cidades são iguais!\n");
        }
        break;
        case 2: 
        if(pib01 > pib02){
            printf("%s GANHOU com maior PIB\n", cardName01);
        } else if(pib02 > pib01){
            printf("%s GANHOU com maior PIB\n", cardName02);
        } else {
            printf("O PIB das duas cidades são iguais!\n");
        }
        break;
        case 3: 
        if(densi01 > densi02){
            printf("%s GANHOU com maior Densidade\n", cardName01);
        } else if(densi02 > densi01){
            printf("%s GANHOU com maior Densidade\n", cardName02);
        } else {
            printf("A Densidade das duas cidades são iguais!\n");
        }
        break;
        case 4: 
        if(pperca01 > pperca02){
            printf("%s GANHOU com maior PIB per Capita\n", cardName01);
        } else if(pperca02 > pperca01){
            printf("%s GANHOU com maior PIB per Capita\n", cardName02);
        } else {
            printf("O PIB per Capita das duas cidades são iguais!\n");
        }
        break;
        case 5: 
        if(area01 > area02){
            printf("%s GANHOU com maior Área\n", cardName01);
        } else if(area02 > area01){
            printf("%s GANHOU com maior Área\n", cardName02);
        } else {
            printf("A Área das duas cidades são iguais!\n");
        }
        break;
        case 6:  
        if(superA > superB){
            printf("%s GANHOU com maior Super Poder\n", cardName01);
        } else if(superA > superB){
            printf("%s GANHOU com maior Super Poder\n", cardName02);
        } else {
            printf("O Super Poder das duas cidades são iguais!\n");
        }
        break;
        default:
        printf("Opção Inválida");
    }
    //      
    return 0 ;
}
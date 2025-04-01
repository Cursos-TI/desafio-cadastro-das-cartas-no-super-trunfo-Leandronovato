#include <stdio.h>

int main(){

    char estado[1], cdcarta[3], cidade[60], estado1[1], cdcarta1[3], cidade1[60];
    int populacao, npt, populacao1, npt1;
    float area, pib, area1, pib1;
          
    printf("\nDIGITE AS ESPECEFICAÇÕES ABAIXO PARA CRIAR CARTAS PARA O 'SUPER TRUNFO'\n\n");
        printf("Digite a Cidade: \n");         
        scanf("%s", &cidade);
        printf("Digite o Estado: \n");         
        scanf("%s", &estado);
        printf("Digite a Quantidade da População: \n");         
        scanf("%d", &populacao);
        printf("Digite a Área do Território: \n");         
        scanf("%f", &area);
        printf("Digite o PIB da População: \n");         
        scanf("%f", &pib);
        printf("Digite o Número de Pontos Turísticos: \n");         
        scanf("%d", &npt);
        
        printf("\n\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
                
        printf("Digite a Cidade: \n");         
        scanf("%s", &cidade1);
        printf("Digite o Estado: \n");         
        scanf("%s", &estado1);
        printf("Digite a Quantidade da População: \n");         
        scanf("%d", &populacao1);
        printf("Digite a Área do Território: \n");         
        scanf("%f", &area1);
        printf("Digite o PIB da População: \n");         
        scanf("%f", &pib1);
        printf("Digite o Número de Pontos Turísticos: \n");         
        scanf("%d", &npt1);

        printf("\n--- CARTA 1 ---\n");
        printf("Estado: %s\n Código: A01\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f Bilhões em Reais\n Número de Pontos Turísticos: %d\n", estado, cidade, populacao, area, pib, npt);
        printf("\n--- CARTA 2 ---\n");
        printf("Estado: %s\n Código: B02\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f Bilhões em Reais\n Número de Pontos Turísticos: %d\n", estado1, cidade1, populacao1, area1, pib1, npt1);
            
    return 0;
}

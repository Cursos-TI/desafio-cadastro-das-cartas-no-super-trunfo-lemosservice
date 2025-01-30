#include <stdio.h>

int main() {
     
    Char Estado[50]
    char Codigo_Carta[10];
    char Nome_cidade[50];
    float populacao;
    float area;
    float PIB
    
    
    printf("Digite o codigo da sua carta: \n");
    scanf("%s", Codigo_Carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%.2f" , &populacao);

    printf("Digite a área(km²): \n");
    scanf("%.2f", &area);

    printf("Digite o PIB da cidade: R$ \n");
    scanf("%.2f", &PIB);

    printf("O codigo da carta è: %s\n", Codigo_Carta);
    printf("Cidade: %s\n", Nome_cidade);
    printf("População: %f(Milhões)\n", populacao);
    printf("Área(km²): %f\n", area);
    printf("PIB:")
return 0;
}

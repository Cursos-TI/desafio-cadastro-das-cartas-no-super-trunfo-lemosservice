#include <stdio.h>

int main() {

    char Codigo_Carta[10];
    char Nome_cidade[50];
    float populacao;
    float area;
    

    printf("Digite o codigo da sua carta: \n");
    scanf("%s", Codigo_Carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%.2f" , &populacao);

    printf("Digite a área(km²): \n");
    scanf("%f", &area);

    printf("O codigo da carta è: %s\n", Codigo_Carta);
    printf("Cidade: %s\n", Nome_cidade);
    printf("População: %f(Milhões)\n", populacao);
    printf("Área(km²): %f\n", area);

return 0;
}

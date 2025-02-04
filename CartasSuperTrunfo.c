#include <stdio.h>

// Definição da struct
//struct: Define um novo tipo de dado que agrupa várias variáveis sob um único nome.
//typedef: Dá um nome alternativo para um tipo, tornando o código mais legível e prático.

typedef struct {
    char estado[50];
    char codigoCarta[10];
    char nomeCidade[50];
    float populacao;
    float area;
    float PIB;
    float densidadePopulacional;
    float PIBperCapita;
} Cidade;// Neste caso o nome de nosso tipo de dados é Cidade . 

// Função para entrada de dados (sem ponteiros)
Cidade entradaDados() {
    Cidade cidade; // Cria uma variável do tipo Cidade dentro da função

    printf("Digite o codigo da sua carta: \n");
    scanf("%s", cidade.codigoCarta);//Quando temos uma variável do tipo struct, usamos o operador ponto (.) para acessar seus membros (atributos).
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade.nomeCidade);
    
    printf("Digite o estado da cidade: \n");
    scanf(" %[^\n]", cidade.estado);
    
    printf("Digite a população da cidade (em milhões): \n");
    scanf("%f", &cidade.populacao);
    
    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &cidade.area);
    
    printf("Digite o PIB da cidade (em bilhões): R$ \n");
    scanf("%f", &cidade.PIB);
    
    return cidade; // Retorna a struct preenchida
}


// Função para calcular e retornar a struct modificada
Cidade calculosdacidade (Cidade cidade){

    cidade.densidadePopulacional = cidade.populacao / cidade.area;
    cidade.PIBperCapita = cidade.PIB / cidade.populacao;


    return cidade; // Retorna a struct modificada
}

// Função para exibir os dados
void exibirDados(Cidade cidade) {
    printf("\n===== Dados da Cidade =====\n");
    printf("Código da carta: %s\n", cidade.codigoCarta);
    printf("Cidade: %s\n", cidade.nomeCidade);
    printf("Estado: %s\n", cidade.estado);
    printf("População: %.3f milhões\n", cidade.populacao);
    printf("Área: %.3f km²\n", cidade.area);
    printf("PIB: R$ %.f milhões\n", cidade.PIB);
    printf("Densidade Populacional: %.2f habitantes por km²\n", cidade.densidadePopulacional);
    printf("PIB per Capita: R$ %f\n", cidade.PIBperCapita);
}
// Função principal
int main() {

    Cidade cidade;
    cidade = entradaDados(); // Agora a função retorna um valor e atribuimos à struct
    cidade = calculosdacidade(cidade);
    exibirDados(cidade); // Passamos a struct por valor

    return 0;
}


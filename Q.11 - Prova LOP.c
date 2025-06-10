//Biblioteca 

#include <stdio.h>

struct CD {
    char banda[50];
    int ano;
    char genero[30];
    int quantidade;
    float preco;
};

struct CD cd;

void cadastrarCD();
void venderCD();
void pesquisarBanda();
int stringsSaoIguais(const char *str1, const char *str2);

int main() {
    int opcao;

    do {
        printf("\n---== Loja Som e Arte ==---\n");
        printf("Escolha uma opçao: \n");
        printf("1 - Cadastrar CD\n");
        printf("2 - Vender CD\n");
        printf("3 - Pesquisar CD por banda\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            cadastrarCD();
            break;

            case 2:
            venderCD();
            break;

            case 3:
            pesquisarBanda();
            break;

            case 0:
            printf("Saindo...\n");
            break;

            default:
            printf("Opçao Invalida! Tente novamente!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}

void cadastrarCD() {
    printf("\n---== Cadastro de CD ==---\n");
    printf("Digite a banda: ");
    scanf(" %49[^\n]", cd.banda);

    printf("Digite o ano: ");
    scanf("%d", &cd.ano);

    printf("Digite o gênero: ");
    scanf(" %29[^\n]", cd.genero);

    printf("Digite a quant. em estoque: ");
    scanf("%d", &cd.quantidade);

    printf("Digite o preço: ");
    scanf("%f", &cd.preco);
}

void venderCD() {
    int qtd;
    printf("\n---== Vendas de CD ==---\n");
    if (cd.quantidade <= 0) {
        printf("CD esgotado!\n");
        return;
    }

    printf("Quantidade que deseja comprar: ");
    scanf("%d", &qtd);

    if (qtd > cd.quantidade)
    {
    printf("Estoque insuficiente! Só há %d unidade(s).\n", cd.quantidade);
    } 
    else
    {
    float total = qtd * cd.preco;
    cd.quantidade -= qtd;
    printf("Venda realizada! Valor total: R$ %.2f\n", total);
    }
}

   int stringsSaoIguais(const char *str1, const char *str2) {
    while (*str1 || *str2) {
        if (*str1 != *str2) 
        return 0;
        str1++;
        str2++;
  }
  return 1;
}


void pesquisarBanda() {
    char busca[50];
    printf("\n---== Pesquisa por Banda ==---\n");
    printf("Digite o nome da banda: ");
    scanf(" %49[^\n]", busca);

    if (stringsSaoIguais(busca, cd.banda)) 
    {
        printf("CD encontrado!\n");
        printf("Banda: %s\n", cd.banda);
        printf("Ano: %d\n", cd.ano);
        printf("Gênero: %s\n", cd.genero);
        printf("Quantidade em estoque: %d\n", cd.quantidade);
        printf("Preço: R$ %.2f\n", cd.preco);
    }
    else 
    {
    printf("CD não encontrado.\n");
    }
}

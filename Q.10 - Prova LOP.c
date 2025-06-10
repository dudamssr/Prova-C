//Biblioteca

#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

struct Produto produto;
void cadastrarProduto();
void visualizarProduto();
void realizarCompra();

int main() {
    int opcao;

    do {
        printf("\n---== Supermercado Supermais ==---\n");
        printf("1. Cadastrar produto\n");
        printf("2. Visualizar produto\n");
        printf("3. Realizar compra\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
            cadastrarProduto();
            break;
            
            case 2:
            visualizarProduto();
            break;
            
            case 3:
            realizarCompra();
            break;
            
            case 0:
            printf("Saindo...\n");
            break;
            
            default:
            printf("Opcao Invalida! Tente novamente!\n");
            break;
        }
    } while(opcao != 0);

    return 0;
}

void cadastrarProduto() {
    printf("\n---== Cadastrar Produto ==---\n");
    printf("Nome do produto: ");
    scanf(" %[^\n]", produto.nome); 

    printf("Preço do produto: ");
    scanf("%f", &produto.preco);

    printf("Quantidade em estoque: ");
    scanf("%d", &produto.quantidade);
}

void visualizarProduto() {
    printf("\n---== Visualizar Produto ==---\n");
    printf("Nome: %s\n", produto.nome);
    printf("Preço: R$ %.2f\n", produto.preco);
    printf("Quantidade em estoque: %d\n", produto.quantidade);
}

void realizarCompra() {
    int qtd;
    printf("\n---== Realizar Compra ==---\n");
    printf("Quantidade a comprar: ");
    scanf("%d", &qtd);

    if (qtd <= produto.quantidade) 
    {
    produto.quantidade -= qtd;
    printf("Compra realizada com sucesso!\n");
    }
    else
    {
    printf("Estoque insuficiente!\n");
    }
}

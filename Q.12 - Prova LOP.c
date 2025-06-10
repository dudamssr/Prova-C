//Biblioteca

#include <stdio.h>
#include <string.h>

#define MAX_PIZZAS 5
#define MAX_CLIENTES 5

typedef struct {
    char nome[20];
    float preco;
} Pizza;

typedef struct {
    char nome[20];
} Cliente;

Pizza pizzas[MAX_PIZZAS];
int totalPizzas = 0;

Cliente clientes[MAX_CLIENTES];
int totalClientes = 0;

void cadastrarPizza();
void listarPizzas();
void cadastrarCliente();
void listarClientes();
void venderPizza();

int main() {
    int opcao;

    do {
        printf("\n---== Pizzaria Nostra Pizza ==---\n");
        printf("Escolha uma opçao: \n");
        printf("1 - Cadastrar Pizza\n");
        printf("2 - Listar Pizzas\n");
        printf("3 - Cadastrar Cliente\n");
        printf("4 - Listar Clientes\n");
        printf("5 - Vender Pizza\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
            cadastrarPizza(); 
            break;
            
            case 2: 
            listarPizzas();
            break;
            
            case 3:
            cadastrarCliente();
            break;
            
            case 4:
            listarClientes(); 
            break;
            
            case 5:
            venderPizza(); 
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

void cadastrarPizza() {
    if (totalPizzas < MAX_PIZZAS)
    {
    printf("\n---== Nova Pizza ==---\n");
    printf("Digite o nome: \n");
    scanf(" %[^\n]", pizzas[totalPizzas].nome); 
    
    printf("Digite o preço: \n");
    scanf("%f", &pizzas[totalPizzas].preco);
        
    totalPizzas++;
    printf("Pizza cadastrada!\n");
    }
    else
    {
    printf("Limite de pizzas atingido!\n");
    }
}

void listarPizzas() {
    printf("\n---== Listar Pizzzas ==---\n");
    if (totalPizzas == 0) 
    {
    printf("Nenhuma pizza cadastrada.\n");
    } 
    else
    {
    for (int i = 0; i < totalPizzas; i++) {
    printf("%d. %s - R$%.2f\n", i + 1, pizzas[i].nome, pizzas[i].preco);
        }
    }
}

void cadastrarCliente() {
    if (totalClientes < MAX_CLIENTES)
    {
        printf("\n---== Cadastrar Cliente ==---\n");
        printf("Digite o nome: \n");
        scanf(" %[^\n]", clientes[totalClientes].nome);
        totalClientes++;
        
        printf("Cliente cadastrado!\n");
    }
    else
    {
    printf("Limite de clientes atingido!\n");
    }
}

void listarClientes() {
    printf("\n---== Listar Clientes ==---\n");
    if (totalClientes == 0) 
    {
    printf("Nenhum cliente cadastrado.\n");
    } 
    else 
    {
    for (int i = 0; i < totalClientes; i++) {
    printf("%d. %s\n", i + 1, clientes[i].nome);
        }
    }
}

void venderPizza() {
    char nomeCliente[20];
    int pizzaEscolhida;
    float total = 0;
    int clienteEncontrado = 0;

    printf("\n---== Vender Pizzas ==---\n");
    printf("Digite o nome do cliente: \n");
    scanf(" %[^\n]", nomeCliente);

    
    for (int i = 0; i < totalClientes; i++) {
    if ((nomeCliente, clientes[i].nome) == 0)
    {
    clienteEncontrado = 1;
    break;
        }
    }

    if (!clienteEncontrado) 
    {
    printf("Cliente encontrado!\n");
    return;
    }

    listarPizzas();

    printf("Qual o numero da pizza desejada: \n");
    scanf("%d", &pizzaEscolhida);

    if (pizzaEscolhida >= 1 && pizzaEscolhida <= totalPizzas)
    {
    total = pizzas[pizzaEscolhida - 1].preco;
    printf("Venda realizada para %s: %s - R$%.2f\n", nomeCliente, pizzas[pizzaEscolhida - 1].nome, total);
    }
    else
    {
    printf("Opçao Invalida!!!\n");
    }
}

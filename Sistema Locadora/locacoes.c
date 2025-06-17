#include <stdio.h>
#include <stdlib.h>

#include "clientes.h"
#include "locacoes.h"

void realizarLocacao(Locacao *locacoes, int *totalLocacoes, Cliente *clientes, int totalClientes) {
    int genero;
    printf("\n ---== Realizar Locação ==---\n");
    printf("Escolha o genero desejado: \n");
    printf("1 - Romance\n");
    printf("2 - Terror ou Suspense\n");
    printf("3 - Comédia\n");
    printf("4 - Drama\n");
    printf("5 - Sair\n");
    scanf("%d", &genero);
    
    printf("Digite o ID do cliente: ");
    scanf("%d", &locacoes[*totalLocacoes].IDCliente);

    printf("Digite o nome do filme: ");
    scanf("%s", locacoes[*totalLocacoes].Filme);

    (*totalLocacoes)++;
    printf("Locação realizada com sucesso!\n");
}

void listarLocacoes(Locacao *locacoes, int totalLocacoes) {
    printf("\n ---== Listar Locações ==---\n");
    for (int i = 0; i < totalLocacoes; i++) {
        printf("ID Cliente: %d\n", locacoes[i].IDCliente);
        printf("Filme: %s\n", locacoes[i].Filme);
    }
}

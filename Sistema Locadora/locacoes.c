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
}
void listarLocacoes(Locacao *locacoes, int totalLocacoes) {
    printf("\n ---== Listar Locações ==---\n");
    for (int i = 0; i < totalLocacoes; i++) {
        printf("ID Cliente: %d\n", locacoes[i].IDCliente);
        printf("Filme: %s\n", locacoes[i].Filme);
        printf("Data: %s\n", locacoes[i].Data);
    }
}
void buscarLocacoesPorCliente(Locacao *locacoes, int totalLocacoes, int idCliente) {
    printf("\n---== Buscar Locações por Cliente ==---\n");
    for (int i = 0; i < totalLocacoes; i++) {
        if (locacoes[i].IDCliente == idCliente) {
            printf("Filme: %s\n", locacoes[i].Filme);
            printf("Data: %s\n", locacoes[i].Data);
        }
    }
}
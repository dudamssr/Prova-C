#include <stdio.h>
#include <stdlib.h>

#include "clientes.h"
#include "locacoes.h"

void cadastrarCliente(Cliente *clientes, int *totalClientes) {
    printf("\n----== Cadastrar Cliente ==---\n");
    printf("Insira seu nome: \n");
    scanf("%s", clientes[*totalClientes].nome); 
    printf("Insira seu ID: \n");
    scanf("%d", &clientes[*totalClientes].ID); 
    printf("Insira seu telefone: \n");
    scanf("%d", &clientes[*totalClientes].telefone); 
    (*totalClientes)++;
    printf("Você está cadastrado!\n");
}
void listarClientes(Cliente *clientes, int totalClientes) {
    printf("\n---== Listar Clientes ==---\n");
    for (int i = 0; i < totalClientes; i++) {
        printf("Nome: %s\n", clientes[i].nome);
        printf("ID: %d\n", clientes[i].ID);
        printf("Telefone: %d\n", clientes[i].telefone);
    }
}
void buscarClientePorID(Cliente *clientes, int totalClientes, int idCliente) {
    int encontrado = 0;
    printf("\n ---== Buscar Cliente por ID ==---\n");
    for (int i = 0; i < totalClientes; i++) {
        if (clientes[i].ID == idCliente) {
            printf("Nome: %s\n", clientes[i].nome);
            printf("ID: %d\n", clientes[i].ID);
            printf("Telefone: %d\n", clientes[i].telefone);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Cliente com ID %d não encontrado.\n", idCliente);
    }
}
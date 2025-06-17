#ifndef CLIENTES_H
#define CLIENTES_H

typedef struct {
    char nome[50];
    int ID;
    int telefone;
} Cliente;

void cadastrarCliente(Cliente *clientes, int *totalClientes);
void listarClientes(Cliente *clientes, int totalClientes);
void buscarClientePorID(Cliente *clientes, int totalClientes, int idCliente);
#endif
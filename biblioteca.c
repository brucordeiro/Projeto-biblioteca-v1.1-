#include <stdio.h>
#include "biblioteca.h"

void exibirMenu(void) {
    printf("\n=================================\n");
    printf("       SISTEMA DE BIBLIOTECA\n");
    printf("=================================\n");
    printf("1 - Cadastrar livro\n");
    printf("2 - Listar livros\n");
    printf("3 - Consultar livro\n");
    printf("4 - Emprestar livro\n");
    printf("5 - Devolver livro\n");
    printf("0 - Sair\n");
}
void cadastrarLivro(Livro biblioteca[], int *quantidade) {

    printf("\n--- CADASTRO DE LIVRO ---\n");

    printf("Codigo: ");
    scanf("%d", &biblioteca[*quantidade].codigo);

    printf("Titulo: ");
    scanf(" %[^\n]", biblioteca[*quantidade].titulo);

    printf("Autor: ");
    scanf(" %[^\n]", biblioteca[*quantidade].autor);

    printf("Ano: ");
    scanf("%d", &biblioteca[*quantidade].ano);

    printf("Quantidade de exemplares: ");
    scanf("%d", &biblioteca[*quantidade].quantidade);

    (*quantidade)++;

    printf("\nLivro cadastrado com sucesso!\n");
}


void listarLivros(Livro biblioteca[], int quantidade) {

    printf("\n--- LISTA DE LIVROS ---\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\nCodigo: %d\n", biblioteca[i].codigo);
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);
        printf("Ano: %d\n", biblioteca[i].ano);
        printf("Quantidade: %d\n", biblioteca[i].quantidade);
    }
}

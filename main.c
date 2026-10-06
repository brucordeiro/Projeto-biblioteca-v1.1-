#include <stdio.h>
#include "biblioteca.h"
#define MAX_LIVROS 100

int main() {

    Livro biblioteca[MAX_LIVROS];
    int quantidade = 0;
    int opcao;

    do {
        exibirMenu();

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
        cadastrarLivro(biblioteca, &quantidade);
    }
        else if (opcao == 2){
        listarLivros(biblioteca, quantidade);
    }

    } while (opcao != 0);

    return 0;
}
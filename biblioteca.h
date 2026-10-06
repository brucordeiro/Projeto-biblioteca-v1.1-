#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

typedef struct {
    int codigo;
    char titulo[100];
    char autor[100];
    int ano;
    int quantidade;
} Livro;

void exibirMenu(void);
void cadastrarLivro(Livro biblioteca[], int *quantidade);
void listarLivros(Livro biblioteca[], int quantidade);

#endif
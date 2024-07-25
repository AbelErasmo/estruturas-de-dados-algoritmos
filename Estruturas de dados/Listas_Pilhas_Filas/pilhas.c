#include <stdio.h>

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct {
    char nome[50];
    Data data;
}Pessoa;

typedef struct no {
    Pessoa pessoa;
    struct no *proximo;
}No;

typedef struct {
    No *topo;
    int tamanho;
}Pilha;

void criar_pilha(Pilha *p) {
    p->topo = NULL;
    p->tamanho = 0;
}

Pessoa ler_pessoa() {
    Pessoa p;

    return p;
}

void empilhar(Pilha *p) {
    No *novo = malloc(sizeof(No));

    if(novo) {
        novo->pessoa = ler_pessoa();
        novo->proximo = p->tamanho;
        p->topo = novo;
        p->tamanho++;
    } else {

    }
}

No* desempilhar(Pilha *p){
   if(p->topo){
        No *remover = p->topo;
        p->topo = remover->proximo;
        p->tamanho--;
        return remover;
   }
}

void imprimir_pessoa(Pilha *p){

}


int main() {



    return 0;
}
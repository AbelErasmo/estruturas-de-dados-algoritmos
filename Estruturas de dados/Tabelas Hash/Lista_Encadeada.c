#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

void inserir_no_inicio(No **lista, int num) {
	No *novo = malloc(sizeof(No));

	if(novo) {
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	} else {
		printf("Erro ao alocar a memoria!\n");
	}
}

void inserir_no_fim(No **lista, int num){
	No *aux, *novo = malloc(sizeof(No));

	if(novo) {
		novo->valor = num;
		novo->proximo = NULL;

		// E o primeiro??
		if(*lista == NULL){
			*lista = novo;
		} else{
			aux = *lista;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		}
	} else {
		printf("Erro ao alocar a memoria!\n");
	}
}

void inserir_no_meio(No **lista, int num, int anterior) {
	No *aux, *novo = malloc(sizeof(No));

	if(novo) {
		novo->valor = num;
		//E o primeiro
		if(*lista == NULL) {
			novo->proximo = NULL;
			*lista = novo;
		} else {
			aux = *lista;
			while(aux->valor != anterior && aux->proximo)
				aux = aux->proximo;
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
	} else {
		printf("Erro ao alocar a memoria!\n");
	}
}

int main(){

	return 0;
}

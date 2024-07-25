#include <stdio.h>

typedef struct no {
    int valor;
    struct no *proximo;
}No;


void inserir_na_lista(No **fila, int num) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        novo->valor = NULL;
        if(*fila == NULL)
            *fila = novo;
        else
            aux = *fila;
        while(aux->proximo) {
            aux = aux->proximo;
            aux->proximo = novo;
        }
    } else {

    }
}

No* remover_na_lista(No **fila) {
    No *remover = NULL;

    if(*fila) {
        remover = *fila;
        *fila = remover->proximo;
    } else {

    }
    return remover;

}

void imprimir(No *no){
    while (no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
    
}

int main() {
    No *remover, *fila = NULL;
    int opcao, valor;

    do{
        printf("\n\t0 - Sair \n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor que pretende inserir: ");
            scanf("%d", &valor);
            inserir_na_lista(&fila, valor);
            break;
        case 2:
            if(remover != NULL) {
                remover = remover_na_lista(&fila);
            } else {
                printf("A lista esta vazia");
            }
            break;
        case 3:
            imprimir(fila);
            break;        
        default:
            break;
        }
    } while (opcao != 0);
    

    return 0;
}
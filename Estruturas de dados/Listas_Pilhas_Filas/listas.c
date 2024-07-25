#include <stdio.h>

typedef struct no {
    int valor;
    struct no *proximo;
}No;

void inserir_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    } else {

    }
}

void inserir_fim_lista(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;

       //E o primeiro?
       if(*lista == NULL)
            *lista = novo;
        else
            aux = *lista;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
    } else {

    }

}

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
       
        //E o primeiro?
       if(*lista == NULL) {
            novo->proximo = NULL;
            *lista = novo;
       } else {
            aux = *lista;
            while(aux->valor != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
       }
    } else {
        
    } 
}

void imprimir(No *no){
    while (no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
    
}

int main() {
    No *lista = NULL;
    int opcao, valor, anterior;

    do {
        printf("\n\t0 - Sair\n\t1 - Inserir no inicio\n\t2 - Inserir no fim\n\t3 - Inserir no meio\n\t4 - Imprimir\n\t\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Digite uma valor: ");
            scanf("%d", &valor);
            inserir_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite uma valor: ");
            scanf("%d", &valor);
            inserir_fim_lista(&lista, valor);
            break;
        case 3:
            printf("Digite uma valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            break;
        }
    } while (opcao != 0);
    
    return 0;
}
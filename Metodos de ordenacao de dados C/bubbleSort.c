#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *v, int n){
    if (n < 1)return;
	int i;
    for (i = 0; i < n; i++)
        if (v[i] > v[i+1])
            swap(&v[i], &v[i+1]);
    bubbleSort(v, n-1);
}

int main(){
    int tam,i,*v;
    
    printf("Digite o tamanho do vector: ");
    scanf("%d",&tam);
    v=(int*)malloc(tam*sizeof(int));
    
    printf("\nIndique os %d elementos do vector que deseja inserir:\n", tam);
    for(i = 0; i < tam; i++) {
    	scanf("%d", &v[i]);
	}
    bubbleSort(v, tam-1);
    
    printf("\nElementos do vector organizados\n");
    for(i = 0; i < tam ; i++) {
    	printf("%d ", v[i]);
	}
    return 0;
}


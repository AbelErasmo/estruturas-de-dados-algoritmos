#include <stdio.h>
#include <stdlib.h>

void selectionSort(int num[], int tam) {
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) {
     	min = i;
     	for (j = (i+1); j < tam; j++) {
       	if(num[j] < num[min])
         	min = j;
    	}
     	if (i != min) {
       		aux = num[i];
       		num[i] = num[min];
       		num[min] = aux;
     	}
  }
}
//void selectionSort(int a[50], int n) {
//	int i, j, aux, min;
//	for(i = 0; i < n-1; i++) {
//		min = i;
//		for(j = i+1; j < n; j++) {
//			if(a[j] < a[min]) {
//				min = j;
//			}
//		}
//		aux = a[i]; a[i] = a[min]; a[min] = aux; //troca
//	}
//}

int main() {
	int a[100], n, i;
	printf("Digite o tamanho do vector: ");
	scanf("%d", &n);

	printf("Indique os %d elementos do vector que deseja inserir:\n", n);

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	selectionSort(a, n);

	printf("\n\nVetor ordenado:\n");
	for(i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	
	return 0;
}

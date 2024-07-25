#include <stdio.h>
#include <stdlib.h>

void merge(int* vetor, int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }
    free(vetAux);
}

void mergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;
        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}

//void merge(int arr[], int p, int q, int r) {
//  int n1 = q - p + 1;
//  int n2 = r - q;
//  int i, j, L[n1], M[n2];
//
//  for (i = 0; i < n1; i++)
//    L[i] = arr[p + i];
//  for (j = 0; j < n2; j++)
//    M[j] = arr[q + 1 + j];
//
//  int a, b, k;
//  a = 0;
//  b = 0;
//  k = p;
//
//  while (a < n1 && b < n2) {
//    if (L[a] <= M[b]) {
//      arr[k] = L[a];
//      a++;
//    } else {
//      arr[k] = M[b];
//      b++;
//    }
//    k++;
//  }
//
//  while (a < n1) {
//    arr[k] = L[a];
//    a++;
//    k++;
//  }
//
//  while (b < n2) {
//    arr[k] = M[b];
//    b++;
//    k++;
//  }
//}
//
//void mergeSort(int arr[], int l, int r) {
//  if (l < r) {
//    int m = l + (r - l) / 2;
//    mergeSort(arr, l, m);
//    mergeSort(arr, m + 1, r);
//    merge(arr, l, m, r);
//  }
//}

void printArray(int arr[], int size) {
	int i;
  	for (i = 0; i < size; i++)
    	printf("%d ", arr[i]);
  	printf("\n");
}

int main() {
  	int i, arr[] = {6, 5, 12, 10, 9, 1, 5, 4, 89, 47, 12, 15, 475, 452, 17, 18, 19, 25, 26, 41, 43, 22, 14};
 	int size = sizeof(arr) / sizeof(arr[0]);
 	
	printf("Array antes da organizacao:\n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	mergeSort(arr, 0, size - 1);

  	printf("\nArray organizado: \n");
  	printArray(arr, size);
}

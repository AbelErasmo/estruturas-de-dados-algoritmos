#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
	int a[100], n, i;
	printf("Digite o tamanho do vector: ");
	scanf("%d", &n);
	printf("Indique os %d elementos do vector que deseja inserir:\n", n);
	
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	insertionSort(a, n);
	printf("\n\nVetor ordenado:\n");
	
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
		
	printf("\n");

	return 0;
}

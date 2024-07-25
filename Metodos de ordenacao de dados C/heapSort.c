#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int tam, int i) {
	int maior = i;

	int esquerda = 2 * i + 1;
	int direita = 2 * i + 2;

	if (esquerda < tam && arr[esquerda] > arr[maior])
		maior = esquerda;
	if (direita < tam && arr[direita] > arr[maior])
		maior = direita;
	if (maior != i) {
		swap(&arr[i], &arr[maior]);
		heapify(arr, tam, maior);
	}
}

void heapSort(int arr[], int tam) {
	int i;
	for (i = tam / 2 - 1; i >= 0; i--)
		heapify(arr, tam, i);

	for (i = tam - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int N) {
	int i;
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int i, arr[] = {12, 34, 54, 2, 7, 5, 87, 100, 254, 56, 74, 80, 20, 92, 47, 6, 3, 251, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Array antes da organizacao:\n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	heapSort(arr, size);
	printf("\nArray depois da organizacao:\n");
	printArray(arr, size);
}



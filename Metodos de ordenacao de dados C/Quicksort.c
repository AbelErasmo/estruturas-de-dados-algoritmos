#include <stdio.h>

void quicksort(int array[], int inicio, int fim) {
	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = array[(inicio + fim) / 2];
	while(i <= j) {
		while(array[i] < pivo && i < fim) {
			i++;
		}
		while(array[j] > pivo && j > inicio) {
			j--;
		}
		if(i <= j) {
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		quicksort(array, inicio, j+1);
	if(i < fim)
		quicksort(array, i, fim);
}

int main() {
	int i, array[] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10, 7, 5, 8, 54, 9, 63, 4, 86, 45, 547, 53, 89, 220};
	for(i = 0; i < 23; i++)	{
		printf("%d ", array[i]);
	}
	printf("\n");
	quicksort(array, 0, 23);
	for(i = 0; i < 23; i++) {
			printf("%d ", array[i]);
	}
	return 0;
}

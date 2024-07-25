#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int inicio, int fim) {
	int pivo = (v[inicio] + v[fim] + v[(inicio + fim)/2]) / 3;
	while(inicio < fim) {
		while(inicio < fim && v[inicio] <= pivo)
			inicio = inicio + 1;
		while(inicio < fim && v[fim]  > pivo)
			fim = fim - 1;
		int aux = v[inicio];
		v[inicio] = v[fim];
		v[fim] = aux;
	}
	return inicio;
}

void quickSort(int *v, int inicio, int fim) {
	if(inicio < fim) {
		int posicao = particiona(v, inicio, fim);
		quickSort(v, inicio, posicao - 1);
		quickSort(v, posicao, fim);
	}
}

void imprimir(int *v, int tamanho) {
	int i;
	for(i = 0; i < tamanho; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main() {
	int v[] = {47, 763, 23, 3, 31, 334, 8, 12, 75, 11, 85, 20, 83,18, 47, 47, 763, 23, 3, 31, 334, 8, 12, 75, 11, 85, 20, 83,18, 47};
	imprimir(v, 28);

	quickSort(v, 0, 28);
	imprimir(v, 28);

	return 0;
}

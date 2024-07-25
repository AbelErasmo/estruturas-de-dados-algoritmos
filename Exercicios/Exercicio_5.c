#include <stdio.h>

int main() {
	int numero_1, numero_2;

	printf("Digite o primeiro numero: ");
	scanf("%d", &numero_1);

	printf("Digite o segundo numero: ");
	scanf("%d", &numero_2);

	if (numero_1 > numero_2) {
		printf("O numero %d e maior!\n", numero_1);

	} if(numero_1 < numero_2) {
		printf("O numero %d e maior!\n", numero_2);

	} if(numero_1 == numero_2) {
		printf("Numeros %d == %d iguais!\n", numero_1, numero_2);
	}

	return 0;
}

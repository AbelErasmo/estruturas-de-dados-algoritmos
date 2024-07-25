#include <stdio.h>

int main() {
	int numero_1, numero_2, diferenca;

	printf("Digite o primeiro numero: ");
	scanf("%d", &numero_1);

	printf("Digite o segundo numero: ");
	scanf("%d", &numero_2);

	if (numero_1 > numero_2) {
		diferenca = numero_1 - numero_2;
		printf("O numero %d e maior!\n", numero_1);

	} if(numero_1 < numero_2) {
		diferenca = numero_2 - numero_1;
		printf("O numero %d e maior!\n", numero_2);

	} if(numero_1 == numero_2) {
		printf("Os numeros %d == %d sao iguais!\n", numero_1, numero_2);
	}

	printf("A diferenca entre os dois numeros e %d\n", diferenca);

	return 0;
}

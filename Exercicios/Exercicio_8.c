#include <stdio.h>

int main() {

	int somaDigitos, numero;
	double quantidadeDigitos;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	while(numero != 0) {
		somaDigitos = somaDigitos + (numero % 10);
		quantidadeDigitos++;

		numero = (numero / 10) % 100000;
	}

	if(quantidadeDigitos > 0) {
		printf("A soma dos digitos e %d \n", somaDigitos);
	} else {
		printf("O numero digitado nao possui digitos.");
	}

	return 0;
}

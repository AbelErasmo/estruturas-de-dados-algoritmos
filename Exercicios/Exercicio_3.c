#include <stdio.h>

int main() {

	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	if((numero%2)==0) {
		printf("O numero ' %d ' digitado e par\n", numero);
	} else {
		printf("O numero ' %d ' digitado e impar\n", numero);
	}

	return 0;
}

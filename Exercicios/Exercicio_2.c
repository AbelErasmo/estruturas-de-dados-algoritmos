#include <stdio.h>
#include <math.h>

int main() {
	int numero, quadrado;
	float raiz;

	printf("Digite um numero: ");
	scanf("%d", numero);

	if(numero > 0) {
		quadrado = numero * numero;

		printf("O quadrado do numero digitado e %d", &quadrado);
		//printf("A raiz quadrada do numero digitado e, %d", raiz);
	}


	return 0;
}

#include <stdio.h>

int main() {

	int opcao;
	double numero_1, numero_2, resultado;

	printf("Escolhe uma opcao\n\t1 - Adicao\n\t2 - Subtracao\n\t3 - Multiplicacao\n\t4 - Divisao\n");
	scanf("%d", &opcao);

	printf("Digite o primeiro numero: ");
	scanf("%d", &numero_1);

	printf("Digite o segundo numero: ");
	scanf("%d", &numero_2);

	switch(opcao) {
	case 1:
		resultado = numero_1 + numero_2;28

		printf("A adicao de %d + %d == %d \n", numero_1, numero_2, resultado);
		break;
	case 2:
		resultado = numero_1 - numero_2;

		printf("A subtracao de %d - %d == %d \n", numero_1, numero_2, resultado);
		break;
	case 3:
		resultado = numero_1 * numero_2;

		printf("A multiplicacao de %d * %d == %d \n", numero_1, numero_2, resultado);
		break;
	case 4:
			if (numero_2 == 0) {
				printf("E proibida a divisao por zero\n");
				printf("Can not divid by zero(0) \n");
				break;
			} else {
				resultado = numero_1 / numero_2;

				printf("A divisao de %d / %d == %d \n", numero_1, numero_2, resultado);
			}
		break;

	default:
		printf("A opcao escolhida nao existe\n");
		break;
	}

	return 0;

}

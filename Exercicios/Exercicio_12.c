#include <stdio.h>

int main() {

	int lado_2, lado_3, somaLados, comprimento;


	printf("Digite o valor do comprimento: ");
	scanf("%d", &comprimento);
	printf("Digite o valor primeiro lado: ");
	scanf("%d", &lado_2);
	printf("Digite o valor segundo lado: ");
	scanf("%d", &lado_3);

	somaLados = lado_3 + lado_2;

	if(comprimento > somaLados) {
		printf("Os valores indicados nao correspondem a um triangulo!\n");
	} else if(comprimento == lado_2 && comprimento == lado_3 && lado_2 == lado_3) {
		printf("Triangulo equilatero\n");
	} else if(lado_3 == lado_2 && comprimento == lado_3 && comprimento == lado_2) {
		printf("Triangulo isosceles\n");
	} else if(comprimento != lado_2 && comprimento != lado_3 && lado_2 != lado_3) {
		printf("Triangulo escaleno\n");
	} else {
		printf("\n");
	}

	return 0;
}

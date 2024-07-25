#include <stdio.h>

int main() {

	double nota_1, nota_2;
	double media;

	printf("Digite a primeira nota: ");
	scanf("%d", &nota_1);

	printf("Digite a segunda nota: ");
	scanf("%d", &nota_2);

	if((nota_1 < 0 && nota_2 < 0)) {
		printf("O valor da nota digitado e invalido\n");

		return;

	} else if((nota_1 > 20 && nota_2 > 20)) {
		printf("O valor da nota digitado e invalido\n");

		return;

	} else if((nota_1 >= 0 && nota_2 >= 0) && (nota_2 <= 20 && nota_1 <= 20)) {

			media = (nota_1 + nota_2) / 2;
	}
	printf("A media das notas digitadas e %d \n", media);

	return 0;
}

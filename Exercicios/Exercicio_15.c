#include <stdio.h>

int main() {

	int numero_de_horas;
	double tarifa;

	printf("Indique o numero de horas do estacionamento: ");
	scanf("%d", &numero_de_horas);

	if(numero_de_horas >= 1 && numero_de_horas <= 2) {
		tarifa = numero_de_horas *20;

		printf("A tarifa de estaciomento e de %dMZN\n", tarifa);

	} else if (numero_de_horas >= 3 && numero_de_horas <= 4) {
		tarifa = numero_de_horas *50.40;

		printf("A tarifa de estaciomento e de 2%dMZN\n", tarifa);

	} else if(numero_de_horas >= 5) {
		tarifa = numero_de_horas *100;

		printf("A tarifa de estaciomento e de 2%dMZN\n", tarifa);
	} else {
		printf("\n");
	}


	return 0;
}

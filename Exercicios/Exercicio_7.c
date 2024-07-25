#include <stdio.h>

int main() {

	double salario, prestacao, salarioPrest;

	printf("Digite o salario do trabalhador: ");
	scanf("%d", &salario);

	printf("Digite a prestacao do emprestimo: ");
	scanf("%d", &prestacao);

	salarioPrest = (20/100) * salario;

	if(prestacao > salarioPrest) {
		printf("Emprestimo nao concedido");
	} else {
		printf("Emprestimo concedido");
	}

	return 0;
}

#include <stdio.h>

int main() {

	int idade, tempoServico;

	printf("Indique a idade do funcionario: ");
	scanf("%d", &idade);
	printf("Indique o tempo do servico do funcionario: ");
	scanf("%d", &tempoServico);

	if(idade >= 65 || tempoServico >= 35) {
		printf("O funcionario ja pode-se aposentar.");
	} else if(idade >= 60 && tempoServico >= 25) {
		printf(" O funcionario ja pode-se aposentar.");
	} else {
		printf("O funcionario ainda esta em dia para exercer as suas funcoes do servico.");
	}

	return 0;
}

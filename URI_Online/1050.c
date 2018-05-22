#include <stdio.h>

int main () {
	int code;

	printf("digite o DDD:\n");
	scanf("%d\n", &code);
	if (code == 61)
		printf("Brasilia\n");
	else if (code == 71)
		printf("Salvador\n");
	else if (code == 11)
		printf("Sao Paulo\n");
	else if (code == 21)
		printf("Rio de Janeiro\n");
	else if (code == 32)
		printf("Juiz de Fora\n");
	else if (code == 19)
		printf("Campinas\n");
	else if (code == 27)
		printf("Vitoria\n");
	else if (code == 31)
		printf("Belo Horizonte\n");
	else
		printf("DDD não cadastrado\n");


	return 0;

}
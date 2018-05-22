#include <stdio.h>

int main(){
	double x, y;
	 

	printf("DIGITE QUAL O SALARIO DA PESSOA:\n");
	scanf("%lf", &x);

	if (x >= 0 && x < 2000.00)
		printf("Isento\n");
	
	else if (x >= 2000.01 && x < 3000.00){
		x = (x - 2000.00) * 0.08;
		y = x;
		printf("R$ %.2lf\n", y);
	}

	else if (x >= 3000.01 && x < 4500.00){
		x = (x - 3000.00) * 0.18;
		y = x + 80; // valor maximo que [x = 1000] pode assumir com a diferença e de 80 reais
		printf("R$ %.2lf\n", y);
	}

	else {
		x = (x - 4500.00) * 0.28;
		y = x + 350; // 270 + 80 --> valores maximos para [3000 - 2000]*.08 + [4500 - 3000] * .18 = 350
		printf("R$ %.2lf\n", y);
	}

	return 0;
}
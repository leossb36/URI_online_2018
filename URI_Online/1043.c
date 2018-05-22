#include <stdio.h>

int main (int argc, char * argv[]) {
	double a, b, c, calc;

	printf("DIGITE OS VALORES DA ENTRADA:\n");
	scanf("%lf %lf %lf", &x1, &x2, &x3);
	if (a + b > c && a + c > b && b + c > a)
		printf("Perimetro = %.1f\n", a+b+c);
	else
		printf("Area =  %.1f\n", (a+b)*c/2);

	return 0;
}

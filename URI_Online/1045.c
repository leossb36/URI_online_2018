#include <stdio.h>


int main(){
	double a, b, c, temp;
	printf("DIGITE OS VALORES DE ENTRADA:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
	if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}

	if (b < a) {
		temp = b;
		b = a;
		a = temp;
	}

	if (a >= b + c)
		printf("NAO FORMA TRIANGULO\n");

	else if (a * a == b * b + c * c)
		printf("TRIANGULO RETANGULO\n");
	
	else if (a * a > b * b + c * c)
		printf("TRIANGULO OBTUSANGULO\n");

	else if (a * a < b * b + c * c)
		printf("TRIANGULO ACUTANGULO\n");

	if (a == b && b == c)
		printf("TRIANGULO EQUILATERO\n");

	else if (a == b || b == c)
		printf("TRIANGULO ISOSCELES\n");
	
	return 0;
		
}

	


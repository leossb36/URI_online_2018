#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(int argo, char *argv[]) {
	int i, fibo;
	
	printf("Digite um valor:\n");
	scanf("%d", &i);
	
	fibo = fib(i);
	
	printf("%d\n", fibo);
	system("PAUSE");

	return 0; 
}

int fib(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n-1) + fib(n-2);
}

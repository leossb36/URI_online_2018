#include <stdio.h>

int main(){
	double n;
	int i, tmp = 0;
	for(i = 0; i < 6; i ++){
		scanf("%lf", &n);
		if (n > 0)
			tmp++;
	}
	printf("%d valores positivos\n", tmp);
	return 0;
}
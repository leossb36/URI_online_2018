#include<stdio.h>

int main(){
    int num, quant;
    
    double comiss, sal;

    scanf("%d", &num);

    scanf("%d", &quant);

    scanf("%lf", &comiss);

    sal = quant * comiss;

    printf("NUMBER = %d\n", num);

    printf("SALARY = U$ %.2lf\n", sal);

    return 0;


}
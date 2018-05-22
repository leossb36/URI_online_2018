#include <stdio.h>

int main(){
	double sal, sal_ajust, ajust;
	int percentual;
	char ch = '%';
	
	printf("DIGITE O SALARIO DO FUNCIONARIO\n");
	scanf("%lf", &sal);

	if (sal >= 0 && sal <= 400.00){
		ajust = 0.15 * sal;
		percentual = 15;
		sal_ajust = ajust + sal;		
	}
	else if (sal >= 400.01 && sal <= 800.00){
		ajust = 0.12 * sal;
		percentual = 12;
		sal_ajust = ajust + sal;		
	}
	else if (sal >= 800.01 && sal <= 1200.00){
		ajust = 0.10 * sal;
		percentual = 10;
		sal_ajust = ajust + sal;		
	}
	else if (sal >= 1200.01 && sal <= 2000.00){
		ajust = 0.7 * sal;
		percentual = 7;
		sal_ajust = ajust + sal;		
	}
	else if (sal > 2000.00 ){
		ajust = 0.4 * sal;
		percentual = 4;
		sal_ajust = ajust + sal;		
	}

	printf("Novo salario: %.2lf\n", sal_ajust);
	printf("Reajuste ganho: %.2lf\n", ajust);
	printf("Em percentual: %d %c\n", percentual, ch);

	return 0;

}
#include <stdio.h>
int main()
{
    double a,b,c;
    int d;
    char ch='%';
    scanf("%lf", &a);
    if(a>=0 && a<=400.00)
    {
        b=a*.15;
        c=a+b;
        d=15;
    }
    else if(a>=400.01 && a<=800)
    {
        b=a*.12;
        c=a+b;
        d=12;
    }
    else if(a>=800.01 && a<=1200)
    {
        b=a*.10;
        c=a+b;
        d=10;
    }
    else if(a>=1200.01 && a<=2000)
    {
        b=a*.07;
        c=a+b;
        d=7;
    }
    else if(a>2000)
    {
        b=a*.04;
        c=a+b;
        d=4;
    }
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: %d %c\n",d,ch);
    return 0;
}
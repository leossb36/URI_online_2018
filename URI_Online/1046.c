#include <stdio.h>

int main () {
	int init_time, final_time, dur;

	printf("DIGITE O TEMPO DE INICIO E FIM\n");
	scanf("%d %d", &init_time, &final_time);

	dur = final_time - init_time;

	if (dur < 0)
		dur = 24 + (final_time - init_time);

	if (init_time == final_time)
		printf("O JOGO DUROU 24 HORA(S)\n");
	else
		printf("O JOGO DUROU %d HORA(S)\n", dur);

	return 0; 	
}

#include <stdio.h>

int main()

{

    int st, et, rt;

    scanf("%d %d", &st, &et);

    rt = et - st;

    if (rt < 0)

    {

        rt = 24 + (et - st);

    }

    if (st == et)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", rt);

 

    return 0;

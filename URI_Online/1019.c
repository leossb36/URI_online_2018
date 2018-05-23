#include<stdio.h>

int main(){
        //ler um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fabrica, e informar expressamente no formato horas:minutos:segundos
//1h tem 60 min 3600 segundos
//1 min tem 60 segundos

        int n, h, m, s;
        scanf("%d", &n);
        h = n / 3600;
        m = n % 3600 / 60;
        s = n % 60;
        printf("%d:%d:%d\n", h, m, s);

        return 0;

}
#include<stdio.h>

int main (){

        // se b > c ; d > a -- c + d > a + b --- c e d sao positivos A = par 'valores aceitos' 'valores nao aceitos'

        int A,B,C,D;
        scanf("%d %d %d %d", &A, &B, &C, &D);
        if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C && D >= 0) && A%2==0){

                printf("Valores aceitos\n");
        } else {
                printf("Valores nao aceitos\n");
        }


        return 0;
}

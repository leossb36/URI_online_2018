#include<stdio.h>
#include<math.h>

int main(){
        double A, B, C, bk, r1, r2;
        scanf("%lf %lf %lf", &A, &B, &C);
        bk = (B * B) -(4 * A * C);
        r1 = (-B + sqrt(bk))/(2 * A);
        r2 = (-B - sqrt(bk))/(2 * A);
        if (bk > 0 && A != 0){
                printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
        } else {
                printf("Impossivel calcular\n");
        }

        return 0;
}

#include<stdio.h>

int main(){
    double A, B, X;
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    X = (3.5*A + 7.5*B)/11;
    printf("MEDIA = %.5lf\n", X);
    return 0;
}
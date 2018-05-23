#include<stdio.h>

int main(){
  float A, B, C, media; 
  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);
  
  media = (0.2 * A + 0.3 * B + 0.5 * C);
  
  printf("MEDIA = %.1f\n", media);
  
  return 0;

}
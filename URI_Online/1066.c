#include <stdio.h>

int main ()
{
  int num, i;
  int value_even = 0, value_odd = 0,
  positive = 0, negative = 0;

  for(i = 0; i < 5; i++)
  {
    scanf("%d", &num);
    if (num % 2 == 0)
      value_even++;
    else
      value_odd++;
    
    if (num > 0)
      positive++;
    if (num < 0)
      negative++;
  }

  printf("%d valor(es) par(es)\n", value_even);
  printf("%d valor(es) impar(es)\n", value_odd);
  printf("%d valor(es) positivo(s)\n", positive);
  printf("%d valor(es) negativo(s)\n", negative);

  return 0;
}
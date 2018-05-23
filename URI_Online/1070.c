#include <stdio.h>

int main ()
{
  int num, i, k;

  scanf("%d", &num);

  if(num % 2 == 0)
  {
    for(i = num + 1; i <= num + 11; i = i + 2)
        printf("%d\n", i);
  }
  else
  {
    for(k = num; k <= num+10; k = k + 2)
        printf("%d\n", k);
  }

  return 0;
}
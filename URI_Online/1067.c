#include <stdio.h>

int main ()
{
  int num, i, value;

  scanf("%d", &num);

  for (i = 1; i <= num; i+=2)
  {
    value = i;
    printf("%d\n", value);
  }

  return 0;
}
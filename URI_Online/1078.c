#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int value, i;

  scanf("%d", &value);

  if (value < 2 && value > 1000)
  {
    printf("\n--Out of range--\n");
    exit(1);
  }

  for (i = 1; i <= 10; i++)
    printf("%d x %d = %d\n", i, value, i * value);

  return 0;
}
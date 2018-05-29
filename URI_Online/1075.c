#include <stdio.h>

int main ()
{
  int count, i;

  scanf("%d", &count);

  for (i = 1; i < 10000; i++)
  {
    if(i%count == 2)
      printf("%d\n", i);
  }

  return 0;
}

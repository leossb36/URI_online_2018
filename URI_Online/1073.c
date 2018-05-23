#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size, i, elem;

  scanf("%d", &size);

  if (size < 5 || size > 2000)
  {
    printf("Out of Range\n");
    exit(1);
  }

  for(i = 2; i <= size; i++)
  {
    if (i%2 == 0)
      elem = i * i;

    printf("%d^2 = %d\n", i, elem);
    i++;
  }
  
  return 0;
}
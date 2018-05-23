#include <stdio.h>

int main()
{
  int size, num, i;

  scanf("%d", &size);

  for (i = 0; i <+ size; i++)
  {
    scanf("%d", &num);

    if (num == 0)
      printf("NULL\n");
    else if (num <= 0 && num%2 == 0)
      printf("EVEN NEGATIVE\n");
    else if (num <= 0 && num%2 == -1)
      printf("ODD NEGATIVE\n");
    else if (num >= 0 && num%2 == 1)
      printf("ODD POSITIVE\n");
    else if (num >= 0 && num%2 == 0)
      printf("EVEN POSITIVE\n");
  }

  return 0;
}
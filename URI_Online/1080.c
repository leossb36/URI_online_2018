#include <stdio.h>

int main()
{
  int value, i, hi_p, position = 0, highest = 0;

  for(i = 1; i <= 100; i++)
  {
    scanf("%d", &value);
    position++;

    if (value > highest)
    {
      hi_p = position;
      highest = value;
    }
  }
  printf("%d\n", highest);
  printf("%d\n", hi_p);

  return 0;
}
#include <stdio.h>

int main()
{
  int num;
  int value = 0;
  for(int i = 1; i <= 5; i++)
  {
    scanf("%d", &num);
    if (num%2==0)
      value += 1;
  }

  printf("%d valores pares\n", value);


  return 0;
}
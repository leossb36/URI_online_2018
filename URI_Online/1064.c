#include <stdio.h>

int main()
{
  float num, media, max_value = 0; 
  int value = 0, i;

  for(i = 0; i < 6; i++)
  {
    scanf("%f", &num);
    if (num >= 0)
    {
      value++;
      max_value += num;
    }
  }

  media = max_value / value;

  printf("%d valores positivos\n", value);
  printf("%.1f\n", media);

  return 0;
}
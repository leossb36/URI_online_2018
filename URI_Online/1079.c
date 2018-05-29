#include <stdio.h>

int main()
{
  int size, i; 
  float value1, value2, value3, avar;

  scanf("%d", &size);

  for(i = 1; i <= size; i++)
  {
    scanf("%f %f %f", &value1, &value2, &value3);
    avar = ((2 * value1 + 3 * value2 + 5 * value3)/10);
    printf("%.1f\n", avar);
  }

  return 0;
}
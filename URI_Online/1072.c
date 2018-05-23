#include <stdio.h>
#include <stdlib.h>

int main()
{
  // read integer N = size
  // X values in the interval

  int N, X, i, count_in = 0, count_out = 0;
  
  scanf("%d", &N);
  
  if (N > 10000)
  {
    printf("Out of range\n");
    exit(1);
  }
  
  for(i = 0; i < N; i++)
  {
    scanf("%d", &X);

    if (X >= 10 && X <= 20)
      count_in++;
    else
      count_out++;
  }
  
  printf("%d in\n", count_in);
  printf("%d out\n", count_out);

  return 0; 

}


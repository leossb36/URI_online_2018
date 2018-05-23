#include <stdio.h>

int main ()
{
  // read 2 integers
  // calc and show the sum between odd values.

  int num1, num2, sum = 0;

  scanf("%d %d", &num1 ,&num2);

  if (num1 == num2)
    printf("%d", num1 - num2);
  
  else if (num1 < num2)
  {
  
    for (num1 = num1 + 1; num1 < num2; num1++)
    {
  
      if (num1%2 == 1 || num1%2 == -1);
        sum += num1;
    }
  
    printf("%d\n", sum);
  }

  else if (num1 > num2)
  {
    
    for (num2 = num2 + 1; num2 < num1; num2++)
    {
     
      if (num2%2 == 1 || num2%2 == -1)
        sum += num2;
    
    }

    printf("%d\n", sum);

  }

  return 0; 
}
#include <stdio.h>

int main()
{
  int i, qtd, numb, qtdRat = 0, qtdFro = 0, qtdBun = 0, total;
  double perBun, perFro, perRat;
  char type[2], typeF[2], typeB[2], typeR[2];

  scanf("%d", &qtd);

  for(i = 1; i <= qtd; i++)
  {
    scanf("%d%s", &numb, type);
    if (type[0] == 'C')
      qtdBun += numb;
    else if (type[0] == 'R')
      qtdRat += numb;
    else if (type[0] == 'S')
      qtdFro += numb;
  }
  
  total = qtdBun + qtdRat + qtdFro;

  perBun = (qtdBun / (total * 1.0)) * 100.00;
  perRat = (qtdRat / (total * 1.0)) * 100.00;
  perFro = (qtdFro / (total * 1.0)) * 100.00;

  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", qtdBun);
  printf("Total de ratos: %d\n", qtdRat);
  printf("Total de sapos: %d\n", qtdFro);
  printf("Percentual de coelhos: %.2lf %%\n", perBun);
  printf("Percentual de ratos: %.2lf %%\n", perRat);
  printf("Percentual de sapos: %.2lf %%\n", perFro);

  return 0;
}
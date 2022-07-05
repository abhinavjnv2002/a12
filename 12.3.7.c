#include <stdio.h>
int main()
{
  int  c, k;

  /*printf("Enter number of rows\n");
  scanf("%d", &n);*/

  for (k = 1; k <= 3; k++)
  {
    for (c = 1; c <= 3-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= 3 - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(3-k)-1; c++)
      printf("*");

    printf("\n");
  }

  return 0;
}

#include <stdio.h>
int main()
{
    int i, j;
    /*printf("Enter number of rows : ");
    scanf("%d", &rows);*/

    for(i=1; i<=4; i++)
    {
        for(j=i; j<4; j++)
        {
            printf(" ");
        }
          for(j=1; j<=(2*i-1); j++)
          {
              printf("*");
          }
        printf("\n");
    }

    return 0;
}

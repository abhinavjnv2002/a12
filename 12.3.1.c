#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,k;
    for(i=1;i<=4;i++)
      {
          k='A';
        for(j=1;j<=4;j++)
            {if(j<=5-i)
            printf("%c ",k++);
            else
                printf("  ");
            }
           printf("\n");
      }
}

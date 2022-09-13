#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
          int n, i, j, k;
          printf("Enter the number of rows: ");
          scanf("%d", &n);
          for(i = 0; i < n; i++)
          {
              for(j = n-1; j >= i; j--)
              {
                  printf("  ");
              }
              for(k = i; k >= -i; k--)
              {
                  printf("%c ", i - abs(k) + 65);
              }
              printf("\n");
          }


    return 0;
}

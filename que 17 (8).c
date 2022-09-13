#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, x, y;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    x = n;
    y = 2*n-1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < n*2; j++)
        {
            if(j == x || j == y || i == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        x++;
        y--;
        printf("\n");
    }


    return 0;
}


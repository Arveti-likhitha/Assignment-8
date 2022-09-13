#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, x, y;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    x = n;
    y = n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < n*2; j++)
        {
            if( j <= x)
            {
                printf("%d ", j);
            }
            else if( j >= y)
            {
                printf("%d ", n*2-j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        x--;
        y++;
    }


    return 0;
}

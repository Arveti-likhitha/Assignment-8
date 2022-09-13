#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j == n || j == n-k || i == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        k++;
        printf("\n");
    }


    return 0;
}

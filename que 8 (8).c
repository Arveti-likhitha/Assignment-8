#include<stdio.h>
#include<conio.h>

int main()
{
    int rows, i, j, k, l;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= i; k ++)
        {
            printf("%d", k);
        }
        for(l = i-1; l >= 1; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}


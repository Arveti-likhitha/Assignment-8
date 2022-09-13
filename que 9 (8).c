#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k, l,m = 1, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= m; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= rows-i; k++)
        {
            printf("%d ", k);
        }
        for(l = rows-i+1; l >= 1; l--)
        {
            printf("%d ", l);
        }
        printf("\n");
        m++;
    }
    return 0;
}

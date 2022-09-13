#include<stdio.h>
#include<conio.h>

int main()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j < rows*2; j++)
        {
            if(j >= i && j <= rows*2-i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }


    return 0;
}

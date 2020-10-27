#include <stdio.h>
int main()
{
    int r, c, rows;    //Hollow Rhombus
    int r1, c1, rows1; //Solid Rhombus
    /* Hollow Square */
    printf("Enter the Number of rows for Hollow Square: ");
    scanf("%d", &rows);
    printf("\n");
    for (r = 1; r <= rows; r++)
    {
        if (r == 1 || r == rows)
        {
            for (c = 1; c <= rows; c++)
            {
                printf("*");
            }
        }
        else
        {
            for (c = 1; c <= rows; c++)
            {
                if (c == 1 || c == rows)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");
    /* Solid Square */
    printf("Enter the Number of rows for Solid Square: ");
    scanf("%d", &rows1);
    printf("\n");
    for (r1 = 1; r1 <= rows1; r1++)
    {
        for (c1 = 1; c1 <= rows1; c1++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
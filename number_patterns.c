#include <stdio.h>

int main() {
    int rows = 0, i, j, space, k = 0, l, m, count = 1;

    // 1
    // 6 2
    // 10 7 3
    // 13 11 8 4
    // 15 14 12 9 5
    printf("Enter the Number of rows for Number Pattern Pyramid: ");
    scanf("%d", &rows);
    for (k = 1; k <= rows; k++)
    {
        m = count;
        for (l = 1; l <= k; l++)
        {
            printf("%d", m);
            m = m - (rows + l - k);
        }
        printf("\n");
        count = count + 1 + rows - k;
    }
    
    // Enter you limit: 5
               
    //             10 
    //          10 20 10 
    //       10 20 30 20 10 
    //    10 20 30 40 30 20 10 
    // 10 20 30 40 50 40 30 20 10 
    printf("Enter you limit: ");
    scanf("%d", &rows);
    for(i=0;i<=rows;i++)
    {
     /* print blank spaces */
        for(j=1;j<=rows-i;j++)
	        printf("   ");
     /* Display number in ascending order upto middle*/
        for(j=1;j<=i;j++)
            printf("%d ",j*10);
 
     /* Display  number in reverse order after middle */
        for(j=i-1;j>=1;j--)
	        printf("%d ",j*10);
 
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Hello, World! \n");
    int rows = 0, i, j, space, k = 0;

    // Enter the Number of rows for Half Pyramid: 5
    // *
    // **
    // ***
    // ****
    // *****

    printf("Enter the Number of rows for Half Pyramid: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for Inverted Half Pyramid: 5
    // *****
    // ****
    // ***
    // **
    // *

    printf("Enter the Number of rows for Inverted Half Pyramid: ");
    scanf("%d", &rows);
    for (i = rows; i >= 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for Full Pyramid: 5
    //         * 
    //       * * * 
    //     * * * * * 
    //   * * * * * * * 
    // * * * * * * * * * 

    printf("Enter the Number of rows for Full Pyramid: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    // Enter the Number of rows for Inverted full pyramid: 5
    // * * * * * * * * * 
    //   * * * * * * * 
    //     * * * * * 
    //       * * * 
    //         * 

    printf("Enter the Number of rows for Inverted full pyramid: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
    {
        for (space = 0; space < rows - i; ++space)
            printf("  ");
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }

    // Enter the Number of rows for Hollow Pyramid: 5
    //     * 
    //    * *
    //   *   *
    //  *     *
    // * * * * * 
    printf("Enter the Number of rows for Hollow Pyramid: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= (rows - i); j++)
        { //print the blank spaces before star
            printf(" ");
        }
        if (i == 1 || i == rows)
        { //for the first and last line, print the stars continuously
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("*"); //in each line star at start and end position
            for (j = 1; j <= 2 * i - 3; j++)
            { //print space to make hollow
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for Diamond Star: 5
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    printf("Enter the Number of rows for Diamond Star: ");
    scanf("%d", &rows);
    int stars = 1;
    space = rows - 1;
    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=space; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<stars*2; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i<rows)
        {
            space--;
            stars++;
        }
        else
        {
            space++;
            stars--;
        }
    }

    // Enter the Number of rows for Hollow Diamond: 5
    //   *
    //  * *
    // *   *
    //  * *
    //   *
    printf("Enter the Number of rows for Hollow Diamond: ");
    scanf("%d", &rows);
    if (rows % 2 == 1)
    { //when n is odd, increase it by 1 to make it even
        rows++;
    }
    int mid = (rows / 2);
    for (i = 1; i <= mid; i++)
    {
        for (j = 1; j <= (mid - i); j++)
        { //print the blank spaces before star
            printf(" ");
        }
        if (i == 1)
        {
            printf("*");
        }
        else
        {
            printf("*"); //in each line star at start and end position
            for (j = 1; j <= 2 * i - 3; j++)
            { //print space to make hollow
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    for (i = mid + 1; i < rows; i++)
    {
        for (j = 1; j <= i - mid; j++)
        { //print the blank spaces before star
            printf(" ");
        }
        if (i == rows - 1)
        {
            printf("*");
        }
        else
        {
            printf("*"); //in each line star at start and end position
            for (j = 1; j <= 2 * (rows - i) - 3; j++)
            { //print space to make hollow
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for Hollow Diamond Star: 5
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    printf("Enter the Number of rows for Hollow Diamond Star: ");
    scanf("%d", &rows);
    // Loop to print upper half of the pattern
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=rows; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Loop to print lower half of the pattern
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*rows-2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Enter the Number of rows for hollow right triangle star pattern: 5
    // *
    // **
    // * *
    // *  *
    // *****
    printf("Enter the Number of rows for hollow right triangle star pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            /* 
             * Print star for first column(j==1), 
             * last column(j==i) or last row(i==rows).
             */
            if (j == 1 || j == i || i == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Enter the Number of rows for inverted right triangle star pattern: 5
    // *****
    // *  *
    // * *
    // **
    // *
    printf("Enter the Number of rows for inverted right triangle star pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j <= rows; j++)
        {
            /* 
             * Print stars for first row(i==1), 
             * first column(j==1) and 
             * last column(j=rows).
             */
            if (i == 1 || j == i || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Enter the Number of rows for mirrored right triangle star pattern: 5
    //     *
    //    **
    //   ***
    //  ****
    // *****
    printf("Enter the Number of rows for mirrored right triangle star pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        /* Print spaces in decreasing order of row */
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        /* Print star in increasing order or row */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for reverse mirrored right triangle star pattern: 5
    // *****
    //  ****
    //   ***
    //    **
    //     *
    printf("Enter the Number of rows for reverse mirrored right triangle star pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        /* Print leading spaces */
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        /* Iterate through columns to print star */
        for (j = i; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for hollow mirrored right triangle star pattern: 5
    //     *
    //    **
    //   * *
    //  *  *
    // *****
    printf("Enter the Number of rows for hollow mirrored right triangle star pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        /* Print trailing spaces */
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        /* Print hollow right triangle */
        for (j = 1; j <= i; j++)
        {
            /*
             * Print star for last row(i==row),
             * first column(j==1) and
             * last column(j==i).
             */
            if (i == rows || j == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Enter the Number of rows for hollow mirrored inverted right triangle star pattern: 5
    // *****
    //  *  *
    //   * *
    //    **
    //     *
    printf("Enter the Number of rows for hollow mirrored inverted right triangle star pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        /* Print leading spaces */
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        /* Print hollow inverted right triangle */
        for (j = i; j <= rows; j++)
        {
            /*
             * Print star for ith column(j==i),
             * last column(j==rows) and for
             * first row(i==1).
             */
            if (j == i || j == rows || i == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Enter the Number of rows for Half Diamond Star:5
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    printf("Enter the Number of rows for Half Diamond Star:");
    scanf("%d",&rows);
    int columns=1;
    for(i=1;i<rows*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < rows)
        {
            /* Increment number of columns per row for upper part */
            columns++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            columns--;
        }

        /* Move to next line */
        printf("\n");
    }

    // Enter the Number of rows for Mirrored Half Diamond Star: 5
    //     *
    //    **
    //   ***
    //  ****
    // *****
    //  ****
    //   ***
    //    **
    //     *
    printf("Enter the Number of rows for Mirrored Half Diamond Star: ");
    scanf("%d", &rows);
    space = rows-1;
    stars = 1;
    
    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    {
        /* Print leading spaces */
        for(j=1; j<=space; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<=stars; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i < rows) 
        {
            stars++;
            space--;
        }
        else
        {
            stars--;
            space++;
        }
    }

    // Enter the Number of rows for Right Arrow Star: 5
    // *****
    //   ****
    //     ***
    //       **
    //         *
    //       **
    //     ***
    //   ****
    // *****
    printf("Enter the Number of rows for Right Arrow Star: ");
    scanf("%d", &rows);
    // Print the upper part of the arrow
    for(i=1; i<rows; i++)
    {
        // Print trailing (2*rownumber-2) spaces
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }
        // Print inverted right triangle star pattern
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Print lower part of the arrow
    for(i=1; i<=rows; i++)
    {
        // Print trailing (2*n - 2*rownumber) spaces
        for(j=1; j<=(2*rows - 2*i); j++)
        {
            printf(" ");
        }
        // Print simple right triangle star pattern
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Enter the Number of rows for Left Arrow Star: 5
    //     *****
    //    ****
    //   ***
    //  **
    // *
    //  **
    //   ***
    //    ****
    //     *****
    printf("Enter the Number of rows for Left Arrow Star: ");
    scanf("%d", &rows);
    // Print upper part of the arrow
    for(i=1; i<rows; i++)
    {
        // Print trailing (n-rownumber) spaces
        for(j=1; j<=(rows-i); j++)
        {
            printf(" ");
        }
        // Print inverted right triangle
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print bottom part of the arrow
    for(i=1; i<=rows; i++)
    {
        // Print trailing (rownumber-1) spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        // Print the right triangle
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*

Hello, World! 
Enter the Number of rows for Half Pyramid: 5
*
**
***
****
*****
Enter the Number of rows for Inverted Half Pyramid: 5
*****
****
***
**
*

Enter the Number of rows for Full Pyramid: 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
Enter the Number of rows for Inverted full pyramid: 5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
Enter the Number of rows for Hollow Pyramid: 5
    * 
   * *
  *   *
 *     *
* * * * * 
Enter the Number of rows for Diamond Star: 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
Enter the Number of rows for Hollow Diamond: 5
  *
 * *
*   *
 * *
  *
Enter the Number of rows for Hollow Diamond Star: 5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
Enter the Number of rows for hollow right triangle star pattern: 5
*
**
* *
*  *
*****
Enter the Number of rows for inverted right triangle star pattern: 5
*****
*  *
* *
**
*
Enter the Number of rows for mirrored right triangle star pattern: 5
    *
   **
  ***
 ****
*****
Enter the Number of rows for reverse mirrored right triangle star pattern: 5
*****
 ****
  ***
   **
    *
Enter the Number of rows for hollow mirrored right triangle star pattern: 5
    *
   **
  * *
 *  *
*****
Enter the Number of rows for hollow mirrored inverted right triangle star pattern: 5
*****
 *  *
  * *
   **
    *
Enter the Number of rows for Half Diamond Star:5
*
**
***
****
*****
****
***
**
*
Enter the Number of rows for Mirrored Half Diamond Star: 5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
Enter the Number of rows for Right Arrow Star: 5
*****
  ****
    ***
      **
        *
      **
    ***
  ****
*****
Enter the Number of rows for Left Arrow Star: 5
    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****

*/
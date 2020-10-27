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

    return 0;
}
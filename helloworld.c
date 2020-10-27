#include <stdio.h>

int main() {
    printf("Hello, World! \n");
    int no = 0, i, j, space, k = 0;
    printf("Enter limit: ");
    scanf("%d", &no);
    printf("Entered Limit: %d \n", no);

    printf("Half Pyramid \n");
    for (i = 0; i < no; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("Inverted Half Pyramid \n");
    for (i = no; i >= 0 ; i--) {
        for (j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("Full Pyramid \n");
    for (i = 1; i <= no; ++i, k = 0) {
        for (space = 1; space <= no - i; ++space) {
                printf("  ");
            }
        while (k != 2 * i - 1) {
                printf("* ");
                ++k;
            }
        printf("\n");
    }

    printf("Inverted full pyramid \n");
    for (i = no; i >= 1; --i) {
        for (space = 0; space < no - i; ++space)
            printf("  ");
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }

    printf("Hollow Pyramid \n");
    for(i = 1; i<=no; i++) {
        for(j = 1; j<=(no-i); j++){ //print the blank spaces before star
            printf(" ");
        }
        if(i == 1 || i == no){ //for the first and last line, print the stars continuously
            for(j = 1; j<=i; j++) {
                printf("* ");
            }
        }
        else {
            printf("*"); //in each line star at start and end position
            for(j = 1; j<=2*i-3; j++) { //print space to make hollow
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    printf("Hollow Diamond \n");
    if(no%2 == 1) { //when n is odd, increase it by 1 to make it even
        no++;
    }
    int mid = (no/2);
    for(i = 1; i<= mid; i++) {
        for(j = 1; j<=(mid-i); j++){ //print the blank spaces before star
            printf(" ");
        }
        if(i == 1) {
            printf("*");
        }
        else {
            printf("*"); //in each line star at start and end position
            for(j = 1; j<=2*i-3; j++){ //print space to make hollow
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    for(i = mid+1; i<no; i++) {
        for(j = 1; j<=i-mid; j++) { //print the blank spaces before star
            printf(" ");
        }
        if(i == no-1) {
            printf("*");
        } else {
            printf("*"); //in each line star at start and end position
            for(j = 1; j<=2*(no - i)-3; j++) { //print space to make hollow
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

// 1
// 6 2
// 10 7 3
// 13 11 8 4
// 15 14 12 9 5
    int l, m, count=1;
    for (k = 1; k <= no; k++) {
        m = count;
        for (l = 1; l <= k; l++) {
            printf("%d",m);
            m = m - (no + l - k);
        }
        printf("\n");
        count = count + 1 + no - k;
   }

   
    return 0;
}
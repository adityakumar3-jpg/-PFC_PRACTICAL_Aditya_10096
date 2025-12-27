#include <stdio.h>

int main() { printf("Aditya_10096");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half (including middle)
    for (int i = n; i >= 1; i--) {
        for (int space = 0; space < n - i; space++)
            printf(" ");
        for (int star = 0; star < 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (int i = 2; i <= n; i++) {
        for (int space = 0; space < n - i; space++)
            printf(" ");
        for (int star = 0; star < 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}
//OUTPUT
//Aditya_10096Enter n: 5
//*********
// *******
//  *****
 //  ***
  //  *
  // ***
//  *****
// *******
//*********


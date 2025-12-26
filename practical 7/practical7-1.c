#include <stdio.h>

int main() { printf("Aditya_10096\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}

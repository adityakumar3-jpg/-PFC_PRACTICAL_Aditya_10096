#include <stdio.h>

int main() { printf("Aditya_10096\n");
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            continue;   

        sum += i;       
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}

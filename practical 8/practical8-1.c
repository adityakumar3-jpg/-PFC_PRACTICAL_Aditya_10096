#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main() { printf("Aditya_10096\n");
    int n ;
    scanf("%d",&n);
    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}

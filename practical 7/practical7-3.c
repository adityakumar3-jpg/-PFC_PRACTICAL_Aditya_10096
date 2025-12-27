#include <stdio.h>

int main() { printf("Aditya_10096");
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
//OUTPUT
//Aditya_10096A
//AB
//ABC
//ABCD

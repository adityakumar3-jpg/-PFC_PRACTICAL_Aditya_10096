#include <stdio.h>

int main() { printf("Aditya_10096\n");
    int pin = 1234;     // correct PIN
    int enteredPin;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("PIN correct. Access granted.\n");
            break;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0) {
        printf("ATM card blocked. Too many wrong attempts.\n");
    }

    return 0;
}

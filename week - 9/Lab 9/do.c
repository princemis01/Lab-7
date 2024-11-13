#include <stdio.h>

int main() {
    int number, sum = 0;
    do {
        printf("Enter a number (0 to end): ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);
    printf("Sum of entered numbers: %d\n", sum);
    return 0;
}

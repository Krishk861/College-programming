#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        isPrime = 0;
    } else {
        // check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // found a divisor, not prime
                break;
            }
        }
    }

    // display result
    if (isPrime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

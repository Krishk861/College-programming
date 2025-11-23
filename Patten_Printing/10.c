#include <stdio.h>

int main() {
    int x, y, i;
    long long power = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    for(i = 1; i <= y; i++) {
        power *= x;
    }
    printf("%d^%d = %lld", x, y, power);
    return 0;
}

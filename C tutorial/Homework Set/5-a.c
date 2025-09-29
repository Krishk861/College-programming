#include <stdio.h>

int SumOfDigits(int n) {
    int sum=0;
    while(n !=0) {
        sum+= n%10;
        n/= 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Sum of the digits is : %d", SumOfDigits(num));
    return 0;
}
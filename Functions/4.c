#include <stdio.h>
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if (n%i==0)
            return 0;
    }
    return 1;
}
int main() {
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(isPrime(number))
        printf("The number is prime");
    else
        printf("The number is not prime");
        return 0;
}
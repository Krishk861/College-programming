//Recursion for factorial
#include <stdio.h>
int factorial(int n){
    if (n==1|| n==0){
        return 1;
    }
    else
        return n*factorial(n-1);
}
int main(){
    int a;
    printf("Enter the number whose factorial is to be derieved");
    scanf("%d",&a);
    printf("The factorial of %d is : %d",a,factorial(a));
}
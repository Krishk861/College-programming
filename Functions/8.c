#include <stdio.h>
void IsPrime(int n){
    int count=0;
    for (int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if (count==2){
        printf("%d is Prime",n);
    }
    else
        printf("%d is not prime",n);
}
int main() {
    int n;
    printf("Enter the number which is prime or not prime: ");
    scanf("%d",&n);
    IsPrime(n);
    return 0;
}
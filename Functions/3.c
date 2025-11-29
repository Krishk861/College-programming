#include <stdio.h>
int n,fact=1;
void Fact(){
    for(int i=1;i<=n;i++){
        fact *= i;
    }
}
int main() {
    printf("Enter the number whose factorial is required :");
    scanf("%d",&n);
    Fact();
    printf("The factorial is : %d",fact);
    return 0;
}
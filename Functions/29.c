#include<stdio.h>
int main(){
    int fact=1;
    int n;
    printf("Enter the number whose factorial is required :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("The factorial is %d",fact);
}

#include <stdio.h>
int Fact_of_n(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        printf("The factorial of %d numbers is %d\n",i,fact);
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number till which factorial is to be printed : ");
    scanf("%d",&n);
    Fact_of_n(n);
    return 0;
}
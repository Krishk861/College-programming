#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,i,digit,count=0,sum=0;
    printf("Enter the number");
    scanf("%d",&n);

    temp=n;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum=sum+pow(digit,count);
        temp/=10;

    }
    if (sum==n){
        printf("The number is a Armstrong numbr ");
    }
    else 
        printf("The number is not an armstrong number");
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,digit,count=0;
    int sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        count++;
        temp/=10; 
    }
    
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum+= pow(digit,count);
        temp/=10;

    }
    if(sum==n){
        printf("%d is an Armstrong Number",n);
    }
    else
        printf("%d is not an armstrong number",n);
}

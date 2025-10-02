#include <stdio.h>
#include <math.h>

int main() {
    int num,remainder,OriginalNum,n=0;
    double result =0.0;
    printf("Enter the num :");
    scanf("%d",&num);

    OriginalNum= num;


//Code for counting the digits to get the power
int temp=num;
while (temp !=0) {
    temp/= 10;
    n++;
}
//Calculation of sum of the nth power of the digits to get armstrong Number
temp= num;
while(temp!=0) {
    remainder =temp%10;
    result += pow(remainder,n);
    temp/=10;
}

//Query for armstrong number
if ((int)result == OriginalNum) {
    printf("%d is an Armstrong Number",OriginalNum);
    }
else{
    printf("%d is not an Armstrong Number",OriginalNum);
    }
return 0;
}
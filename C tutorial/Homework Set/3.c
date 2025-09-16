#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    int average=(a+b+c)/3;
    printf("Average is: %d",average);
    return 0;
}
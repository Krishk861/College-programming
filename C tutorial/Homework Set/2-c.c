#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    if (a>b) {
        printf("The smaller no is :%d",b);
    }
    else if (a<b) {
        printf("The smaller no is : %d",a);
    }
    else{
        printf("Both numbers are equal");
    }
    return 0;
}
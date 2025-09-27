#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int perimeter=2*(a+b);
    printf("Perimeter is: %d",perimeter);
    return 0;
}
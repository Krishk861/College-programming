#include <stdio.h>

int main() {
    int a,b,max;
    int*p1,*p2;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    max=(*p1>*p2?*p1:*p2);
    printf("The max no is %d",max);
    return 0;
}
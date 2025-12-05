#include <stdio.h>
int Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
    int main () {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    Swap(&a,&b);
    printf("The swapped no are %d & %d",a,b);
    return 0;
}
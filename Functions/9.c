#include <stdio.h>
void Swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    Swap(&a,&b);
    printf("A after swapping is %d\n",a);
    printf("B after swapping is %d",b);
}
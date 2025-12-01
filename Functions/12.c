#include<stdio.h>
int Fibbonaci(int n){
    int a=0;
    int b=1;
    int next;
    for(int i=1;i<=n;i++){
        printf(" %d ",a);
        next=a+b;
        a=b;
        b=next;
    }
    
}
int main(){
    int number;
    printf("Enter the number of terms required from fibbonaci series: ");
    scanf("%d",&number);
    printf("The terms are :");
    Fibbonaci(number);
    return 0;
}

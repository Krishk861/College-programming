#include <stdio.h>
int  main(){
    int a=0;
    int n,next;
    int b=1;
    printf("Enter the number of terms required : ");
    scanf("%d",&n);
    printf("The terms of fibonacci series are :");
    for (int i=0;i<=n;i++){
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}
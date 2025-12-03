#include <stdio.h>
int main(){
    int n,i;
    printf("Enter N: ");
    scanf("%d",&n);
    for (i=1;i<11;i++){
        printf("%dX%d=%d\n",n,i,n*i);
    }
    return 0;
}
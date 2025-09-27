#include<stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n>0) {
        printf("%d is a Natural Number.",n);
    }
    else{
        printf("%d is not a Natural number",n );
    }

}
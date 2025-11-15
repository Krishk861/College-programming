#include <stdio.h>

int main() {
    int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    int a=100;
    for(i=1;i<=n;i++){
        
        printf("%d\n",a);
        a-=3;
    }
    return 0;
}

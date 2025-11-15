#include <stdio.h>

int main() {
    int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Composite no");
            break;
        }
        else{
            printf("Prime no.");
            break;
        }
    }    
    return 0;
}

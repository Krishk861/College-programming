#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        int d=65;
        for (int j=1;j<=i;j++){
        char ch= (char)d;
        printf("%c",ch);
        d++;
        }
        printf("\n");
    }
}
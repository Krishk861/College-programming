#include <stdio.h>


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    printf("%d\n%d", a, b);

    return 0;
    printf("%d\n",a);
    printf("%d\n",b);
}

void update(int *a, int *b) {
    int sum=*a+*b;
    int diff=*a-*b;
}
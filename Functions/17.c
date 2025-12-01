#include <stdio.h>
int main() {
    int a;
    a = 12;
    int *ptr = &a;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",pptr);
    printf("%d\n",**pptr);
    printf("%p\n",ppptr);
    printf("%d\n",*ppptr);
    
    return 0;
}
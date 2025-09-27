#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=1;
    ptr[2]=1;
    ptr[3]=1;
    ptr[4]=1;
    for (int i=0;i<5;i++) {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
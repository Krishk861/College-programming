#include<stdio.h>

int main() {
    int marks;
    printf("Enter thr marks obtained :");
    scanf("%d",&marks);
    if (marks>30) {
    printf("PASS");
    }
    else {
        printf("FAIL");
    }
    return 0;
}
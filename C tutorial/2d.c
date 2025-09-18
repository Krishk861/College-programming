#include <stdio.h>

int main() {
    int marks[2][3];
    marks[0][0]=99;
    marks[0][1]=95;
    marks[0][2]=100;
    marks[1][0]=94;
    marks[1][1]=96;
    marks[1][2]=97;
    printf("%d",marks[0][1]);
    return 0;
}
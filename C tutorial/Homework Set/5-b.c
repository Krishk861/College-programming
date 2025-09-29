#include <stdio.h>
#include <math.h>

double SquareRoot(double n) {
    return sqrt(n);   
}
int main() {
    double num;
    printf("Enter the number: ");
    scanf("%lf",&num);

    if (num<0) {
        printf("Square root is not real");
    }
    else {
        printf("Square root of %.2lf is %.2lf\n",num,SquareRoot(num));
    }
    printf("Root of the number is : %d", SquareRoot(num));
    return 0;
}
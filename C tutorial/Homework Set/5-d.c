#include <stdio.h>
#include<math.h>

int Power(int base,int power);
int main() {
    int base, power;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the power : ");
    scanf("%d",&power);
    printf("The power is %d\n",Power(base,power));
    return 0;
}
int Power(int base,int power) {
    return (int)pow(base,power);
} 
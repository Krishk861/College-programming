#include <stdio.h>

int main() {
    float price[3];
    printf("Enter the prices :");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price of 1 : %f\n",price[0]+(0.18*price[0]));
    printf("Total price of 2 : %f\n",price[0]+(0.18*price[1]));
    printf("Total price of 3 : %f\n",price[0]+(0.18*price[2]));
    return 0;
}
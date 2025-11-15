#include <stdio.h>
int main() {
    int units;
    float amount;
    char name[20];
    printf("Enter the name :");
    scanf("%s",name);
    printf("Enter the units of electricity used :");
    scanf("%d",&units);
    if(units<=200) amount=units*0.70;
    else if(units<=300) amount=200*0.70+(units-200)*0.80;
    else amount=200*0.70+100*100*0.80+(units-300)*1.00;
    if(amount<100) amount=100;
    if(amount>400) amount+=amount*0.20;
    printf("The amount to be paid by %s for using %d units electricity(in rs.) is: %.2f",name,units,amount);
    return 0;
}
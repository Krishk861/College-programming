#include <stdio.h>
int main() {
    int units;
    float amount;
    char name[30];
    printf("Enter units : ");
    scanf("%d",&units);
    printf("Enter name : ");
    scanf("%s",name);
    if(units<=200){
        amount=units*0.70;
    }
    else if (units<=300)
    {
        amount=(units-200)*0.80+200*0.70;
    }
    else
        amount=(units-300)*1+(200*0.70)+(100*0.80);
    if(amount<100){
        amount=100;
    }
    else if(amount>400){
        amount=amount+amount*0.20;
    }
    printf("%s consumed %d units and was charged %f",name,units,amount);
    return 0;
}
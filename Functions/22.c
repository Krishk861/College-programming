#include <stdio.h>
#include <math.h>
int main(){
    int units;
    printf("Enter units:");
    scanf("%d",&units);
    switch(units/100){
        case 0:
            printf("The electricity bill is: %d",units*5);
            break;
        case 1:
           
            printf("The electricity bill is: %d",units*7);
            break;
        case 2:
        printf("The electricity bill is: %d",units*10);
            break;
        case 3:
            printf("The electricity bill is: %d",units*15);
            break;
            default:
                printf("The electricity bill is: %d",units*15);
    }
}

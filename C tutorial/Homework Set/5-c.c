#include <stdio.h>

int temp;
int TempPredictor(temp) {
    if (temp>25) {
        printf("The product is hot.\n");
    }
    else {
        printf("The product is cold.\n");
    }
    return 0;
} 
int main() {
    int temperature;
    printf("Enter the temperature : ");
    scanf("%d",&temperature);
    TempPredictor(temperature);
    return 0;
}
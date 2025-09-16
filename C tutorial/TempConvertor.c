#include <stdio.h>

float TempConvertor(float celcius);
int main() {
    float farheneit=TempConvertor(0);
    printf("The temperature is : %f", farheneit);
    return 0;
}

float TempConvertor(float celcius) {
    float farheneit=celcius*(9.0/5.0)+32;
    return farheneit;
}
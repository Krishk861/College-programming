#include <stdio.h>
void printHello();
void Goodbye();

int main() {
    printHello();
    Goodbye();
    return 0;
}

// Function call
void printHello() {
    printf("Hello World \n");
}
void Goodbye() {
    printf("Goodbye \n");
}
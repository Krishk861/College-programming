#include <stdio.h>

void printHello();//Declaration of function
int main() {
    printHello();// Function call
    printHello();
    printHello();
    return 0;
}
//Defination of function
void printHello() {
    printf("Hello! \n");
    printf("My name is Krish \n");
}
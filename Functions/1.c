#include <stdio.h>

void Greet(char name[50]){
    printf("Good afternoon %s!!",name);
}
int main() {
    char name[50];
    printf("Enter name: ");
    scanf("%s",name);
    Greet(name);
    return 0;
}
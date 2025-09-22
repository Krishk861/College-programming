#include <stdio.h>
#include <string.h>

void check(char str[],char ch);

int main() {
    char str[]="Hello world";
    char ch='e';
    check(str,ch);
    
}


void check(char str[],char ch) {
    for (int i=0;str[i] !='\0';i++)
        if (str[i]==ch) {
            printf("Character is present");
            return;
        }
        printf("Character is not present.");
}
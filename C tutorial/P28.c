#include <stdio.h>

void Namaste();
void Bonjour();

int main() {
    printf("Enter f for french and i for indian");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        Namaste();
    }
    else {
        Bonjour();
    }
}

void Namaste() {
    printf("Namaste");
}
void Bonjour() {
    printf("Bonjour");
}
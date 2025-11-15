#include <stdio.h>

int main(void) {
    char Upper[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Lower[]="abcdefghijklmnopqrstuvwxyz";
    char *p;

    printf("Uppercase letter : \n");
    for( p=Upper;*p!='\0';++p) {
        putchar(*p);
        putchar(' ');
    }
    putchar('\n');
    printf("Lowercase letter : \n");
    for( p=Lower;*p!='\0';++p) {
        putchar(*p);
        putchar(' ');
    }
    putchar('\n');
    return 0;

}
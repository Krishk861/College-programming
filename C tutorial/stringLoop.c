#include <stdio.h>

void String(char arr[]);
int main() {
    char first_name[]="Inevitable";
    char last_name[]="Hazard";

    String(first_name);
    String(last_name);
    return 0;
}

void String(char arr[]) {
    for (int i=0; arr[i] !='\0';i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
}
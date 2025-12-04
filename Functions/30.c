#include<stdio.h>
int main(){
    int i=0;
    char str[]="My name is Krish.";
    while (str[i]!='\0'){
        i++;
    }
    printf("The length of string is : %d",i);
    return 0;
}
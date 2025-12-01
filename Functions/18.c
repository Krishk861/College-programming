#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int left,right;
    printf("Enter the word :");
    scanf("%s",str);
    left=0;
    right=strlen(str)-1;
    while(left<right){
        if(str[left]!= str[right]){
            printf("Not a Palindrome.");
            return 0;
        }
        left++;
        right--;
    }
    printf("Palindrome!\n");
    return 0;
}
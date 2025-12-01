#include <stdio.h>
#include <string.h>
int main(){
    char arr[50];
    printf("Enter the string: ");
    scanf("%s",arr);
    int left=0;
    int right=strlen(arr)-1;
    char temp;
    while(left<right){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }
    printf("The reversed string is: %s",arr);
    return 0;
}
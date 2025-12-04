#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max=arr[0];
    int min=arr[0];
    for (int i=0;i<10;i++){
        if(arr[i]>arr[i+1]){
            min=arr[i];
        }
    }
    printf("The min no is %d\n",min);
    for (int i=0;i<10;i++){
        if(arr[i]<arr[i+1]){
            max=arr[i+1];
        }
    }
    printf("The max no is %d\n",max);
    return 0;
}
#include <stdio.h>
int main() {
    int arr[7]={5,11,13,7,33,12,11};
    int max=0;
    for(int i=0;i<=6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The max no in array is %d\n",max);
    return 0;
}
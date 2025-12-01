#include <stdio.h>
int main(){
    int i,temp;
    int n=7;
    int arr[7]={1,3,4,2,6,5,7};
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("The reversed array is :");
    for(i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
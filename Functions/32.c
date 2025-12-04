#include <stdio.h>
int main(){
    int m,n;
    printf("Enter m :");
    scanf("%d",&m);
    printf("Enter n :");
    scanf("%d",&n);
    int arr1[m];
    int arr2[n];
    printf("Enter elements of arr1:");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of arr2:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
                break;
            }
        }
    }
    return 0;
}
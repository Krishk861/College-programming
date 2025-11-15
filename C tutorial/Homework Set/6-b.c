#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n]; // Array declaration

    printf("Enter %d elements :");
    for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    // Code for reversing the order of array
    printf("The reverse order of array :\n");
    for(int i=n-1;i>=0;i--) {
        printf("%d ", arr[i]);
    }
    return 0;

}
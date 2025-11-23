#include <stdio.h>
int main(){
    int i,j,c,r;
    printf("Enter columns:");
    scanf("%d",&c);
   printf("Enter rows:");
    scanf("%d",&r);
    //First loop iterates for no. of rows-->No of lines
    for (i=1;i<=r;i++)
    //Second loop iterates for no of columns-->No of elements
    {
        for(j=1;j<=c;j++)
            if (i==3 || j==3){
            printf("*");
            }
            else
            printf(" ");
        printf("\n");
    }
    return 0;
}
//For A square pattern use nXn
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three elements :");
    scanf("%d %d %d",&a,&b,&c);
    int second=a;
    if(b>a && b<c|| b<a && b>c){
        second=b;
    }
    else if(c>a &&c<b|| c<a && c>b){
         second=c;
    }
    printf("The second largest no is: %d",second);
}
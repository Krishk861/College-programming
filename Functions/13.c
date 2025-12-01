#include <stdio.h>
int main(){
    int marks[4]={96,30,87,65};
    for(int i=0;i<=3;i++){
        if(marks[i]<35){
            printf("Rollno of the student is %d",i);
        }
    }
    return 0;
}
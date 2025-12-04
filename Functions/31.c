#include <stdio.h>
#include<string.h>
struct Student{
    int roll_no;
    char name[25];
    int age;
    char address[50];
};
int main(){
    struct Student s[3];

        s[0].roll_no=01;
        strcpy(s[0].name,"Krish");
        s[0].age=19;
        strcpy(s[0].address,"Hazaribagh");
    
        s[1].roll_no=02;
        strcpy(s[1].name,"Digvijay");
        s[1].age=18;
        strcpy(s[1].address,"Pune");
    
        s[2].roll_no=04;
        strcpy(s[2].name,"Anurag");
        strcpy(s[2].address,"Hazaribagh");
        s[2].age=13;
    printf("The student names whose age is greater than 14 :\n");
    for(int i=0;i<3;i++){
        if(s[i].age>14){
            printf("%s\n",s[i].name);
        }
    }
    printf("The student names whose roll no is even :\n");
    for(int i=0;i<3;i++){
        if(s[i].roll_no%2==0){
            printf("%s\n",s[i].name);
        }
    }
    int n;
    printf("Enter the roll no of student to get his/her details");
    scanf("%d",&n);
    printf("%d %s %d %s",s[n-1].roll_no,s[n-1].name,s[n-1].age,s[n-1].address);
}
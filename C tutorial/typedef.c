#include <stdio.h>
#include <string.h>

//Structure defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
}stu;

int main() {
    stu s1;
    s1.roll = 1;
    s1.cgpa=9.5;
    strcpy(s1.name,"Krish");
    printf("The details of s1 is : %s",s1.name);
    return 0;
    
}
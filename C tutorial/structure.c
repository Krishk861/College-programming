#include <stdio.h>
#include <string.h>

//Structure defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.cgpa =9.15;
    s1.roll=10;
    //s1.name="Krish"; This is wrong
    strcpy(s1.name,"Krish");

    printf("Student name :%s \n",s1.name);
    printf("Student roll :%d \n",s1.roll);
    printf("Student cgpa :%f \n",s1.cgpa);

}
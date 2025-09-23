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

    struct student s2;
    s2.cgpa =8.15;
    s2.roll=12;
    //s1.name="Krish"; This is wrong
    strcpy(s2.name,"Ramesh");

    struct student s3;
    s3.cgpa =9.00;
    s3.roll=11;
    //s1.name="Krish"; This is wrong
    strcpy(s3.name,"Digvijay");

    printf("Student name :%s \n",s1.name);
    printf("Student roll :%d \n",s1.roll);
    printf("Student cgpa :%f \n",s1.cgpa);
    printf("Student name :%s \n",s2.name);
    printf("Student roll :%d \n",s2.roll);
    printf("Student cgpa :%f \n",s2.cgpa);
    printf("Student name :%s \n",s3.name);
    printf("Student roll :%d \n",s3.roll);
    printf("Student cgpa :%f \n",s3.cgpa);

}
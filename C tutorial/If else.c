#include <stdio.h>

int main() {
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if (age >18) {
    printf("The person is eligible to vote \n");
    printf("The person is eligible to drive \n");
    }
    else {
        printf("The person is too young.");
    }
    printf("Thank you");
    return 0;
}
#include <stdio.h>

int main() {
    int day;
    printf("Enter the day(1-7) :"); //1-monday,2-Tuesday,3-Wednesday,4-Thursday,5-Friday,6-Saturday,7-Sunday
    scanf("%d", &day);
    switch (day)
    {
    case 1: printf("Monday");
            break;
    case 2: printf("Tuesday");
            break;
    case 3: printf("Wednesday");
            break;
    case 4: printf("Thursday");
            break;
    case 5: printf("Friday");
            break;
    case 6: printf("Saturday");
            break;
    case 7: printf("Sunday");
            break;
    default: printf("Not a valid Day");
    }
    return 0;
}
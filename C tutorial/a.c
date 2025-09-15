#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   char ch,s[100],sen[200];
    printf("Enter ch :");
    scanf("%c",&ch);
    printf("Enter s:");
    scanf("%s",s);
    printf("Enter sen :");
    scanf(" %[^\n]%*c",sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
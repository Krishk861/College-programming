#include <stdio.h>
#include <math.h>
int main(){
    int P,R,T;
    printf("Enter Principal value :");
    scanf("%d",&P);
    printf("Enter Rate value :");
    scanf("%d",&R);
    printf("Enter Time(in years):");
    scanf("%d",&T);
    float SI;
    SI=P*R*T/100;
    float Amount_after_Simple_Interest=SI+P;
    float CI;
    CI=P*pow(1+(R/100),T);
    float Amount_after_Compound_Interest=CI+P;
    printf("The amound after simple interest: %f\n",Amount_after_Simple_Interest);
    printf("The amound after simple interest: %f\n",Amount_after_Compound_Interest);
}

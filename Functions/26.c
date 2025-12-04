// #include <stdio.h>
// void main(){
//     int i=15;
//     int j=i-1;
//     while(i>0){
//         printf("%d",i);
//         while (j>0)
//         {printf("#");
//             j--;
//         }
//         i--;
//     }
//     return;
// }
#include <stdio.h>
void main(){
    int i, j;
    for(i=15; i>0;){
        printf("%d",i);
        for(j=i-1; j>0;)
        {
        printf("#");
        j=j-1;
        }
        i =i-1;
    }
}
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr=fopen("Text.txt","w");

    char ch;
    fprintf(fptr,"%c",'H');
    fprintf(fptr,"%c",'E');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'O');
    /*fscanf(fptr,"%c",&ch);
    printf("Character =%c\n",ch);

    fclose(fptr);
    /*if (fptr== NULL) {
        printf("File doesnt exist\n");
    }
    else {
        fclose(fptr);
    }*/
    return 0;
}
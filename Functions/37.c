#include <stdio.h>
#include <string.h>
struct Crossword
{
    char title[50];
    char author[50];
    int price;
};
int main() {
    int max,min;
    struct Crossword book[3];
    strcpy(book[0].title,"The first book of Harry potter");
    strcpy(book[0].author,"JK Rowling");
    book[0].price=400;

    strcpy(book[1].title,"The seconde book of Harry potter");
    strcpy(book[1].author,"JK Rowling");
    book[1].price=450;

    strcpy(book[2].title,"The third book of Harry potter");
    strcpy(book[2].author,"JK Rowling");
    book[2].price=500;
    max=min=book[0].price;
    for (int i=0;i<3;i++){
        if(book[i].price>max){
            max=book[i].price;
        }
        if(book[i].price<min){
            min=book[i].price;
        }
    }
    printf("Max value is %d\n",max);
    printf("Min value is %d\n",min);
    for (int i=0;i<3;i++){
        if(book[i].price==max)
        printf("%s %s %d \n",book[i].author,book[i].title,book[i].price);
    }
    for (int i=0;i<3;i++){
        if(book[i].price==min)
        printf("%s %s %d \n",book[i].author,book[i].title,book[i].price);
    }
    return 0;
}

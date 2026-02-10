//Copying and Comparing Structure Variables

#include<stdio.h>
#include<string.h>

struct book {
    int pages;
    char name[100];
    float price;
};

int main() {
    struct book book1 = {100,"Atomic Habits",200.5};
    struct book book2;
    
    book2 = book1;

    int x=0;

    if((book1.pages==book2.pages) && (strcmp(book1.name, book2.name)==0) && (book1.price==book2.price)) {
        x=1;
    }

    if(x==1) {
        printf("\nBook2 and Book1 are same");
    }
    else {
        printf("\nBook1 and Book2 are different");
    }

    return 0;
}
//Accessing structure variables

#include<stdio.h>

struct book {
    char name[20];
    int pages;
    char author[20];
    float price;
};

int main() {
    struct book b1;

    printf("Enter the values:\n");
    scanf("%s \t %d \t %s \t %f",b1.name, &b1.pages, b1.author, &b1.price);

    printf("\nThe values of structure variables is:\n");
    printf("\nName: %s",b1.name);
    printf("\nPages: %d",b1.pages);
    printf("\nAuthor: %s",b1.author);
    printf("\nPrice: %f",b1.price);

    return 0;
}
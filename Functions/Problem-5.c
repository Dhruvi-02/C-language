//Program to print the number using functions

#include<stdio.h>

int number(void);

int main() {

    printf("Calling the function...");
    int num = number();
    printf("\nThe number is %d",num);
    printf("\nThe answer returned from the called function...");
    return 0;
}

int number(void) {

    int number;
    printf("\nEnter the number: ");
    scanf("%d",&number);
    return(number);
}
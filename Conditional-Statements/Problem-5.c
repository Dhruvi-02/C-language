//Program to check if number is positive and if number is positive then check if it's odd or even

#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num>0) {
        if(num%2==0) {
            printf("%d is positive and even",num);
        }
        else {
            printf("%d is positive but odd",num);
        }
    }
    else {
        printf("%d is negative");
    }

    return 0;
}
//Program to print ASCII code of first letter of the input

#include<stdio.h>

int main() {

    char str[50];
    puts("Enter the string: ");
    gets(str);

    printf("ASCII code of %c is %d",str[0],str[0]);

    return 0;
}
//Program to separate string characters

#include<stdio.h>

int main() {

    char str[50];
    int i;
    puts("Enter the string:");
    gets(str);

    printf("\nThe string with separate characters:\n");

    for(i=0;str[i]!='\0';i++) {
        printf("%c\t",str[i]);
    }

    return 0;
}
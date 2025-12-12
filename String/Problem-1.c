//Program to read string from user and print the length of the string

#include<stdio.h>

int main() {

    int i,len=0;
    char str[50];
    puts("Enter the string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++) {
        len += 1;
    }

    printf("\nLength of string is %d",len);

    return 0;
}
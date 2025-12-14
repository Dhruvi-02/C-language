//Program to copy one string into another without using strcpy()

#include<stdio.h>
#include<string.h>

int main() {

    char str[50],temp[50];
    int len,i;
    puts("Enter the string: ");
    gets(str);

    len = strlen(str);

    for(i=0;i<len;i++) {
        temp[i] = str[i];
    }
    temp[len] = '\0';

    printf("The copy of input string is: ");
    for(i=0;i<len;i++) {
        printf("%c",temp[i]);
    }

    return 0;
}
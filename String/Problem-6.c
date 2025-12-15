//Program to count number of words in a string

#include<stdio.h>

int main() {

    int i,count=0;
    char str[50];
    puts("Enter the string:");
    gets(str);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==' ') {
            count ++;
        }
    }

    printf("The total words in string are: %d",count+1);

    return 0;
}
//Program to count the occurrences of a character in a string

#include<stdio.h>

int main() {

    int i,count=0;
    char str[50],target;

    puts("Enter the string:");
    gets(str);
    printf("\nEnter the target: ");
    scanf("%c",&target);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==target) {
            count +=1 ;
        }
    }

    printf("%c has occurred %d times in the string",target,count);

    return 0;
}
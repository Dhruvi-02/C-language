//Program to convert the string into uppercase

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {

    char str[100],temp[100];
    int i,len;

    printf("Enter the string: ");
    gets(str);

    len = strlen(str);

    for(i=0;i<len;i++) {
        if(islower(str[i])) {
            temp[i] = toupper(str[i]);
        }
        else {
            temp[i] = str[i];
        }
    }

    temp[i] = '\0';

    printf("The uppercase of input string is: %s",temp);

    return 0;
}
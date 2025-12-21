//Program to toggle a string

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char str[100];
    int len,i;

    printf("Enter the string(without whitespace): ");
    gets(str);

    len = strlen(str);

    for(i=0;i<len;i++) {
        if(str[i]==' ') {
            return 1;
        }
    }

    for(i=0;i<len;i++) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }

    printf("\nThe toggled string is: %s",str);

    return 0;
}
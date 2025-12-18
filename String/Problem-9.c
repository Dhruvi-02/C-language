//Program to check the number of times digits, characters and special characters in the input string

#include<stdio.h>

int main() {

    int i,ch=0,digits=0,sp_ch=0;
    char str[50];

    puts("Enter the string:");
    gets(str);

    for(i=0;str[i]!='\0';i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            ch += 1;
        }
        else if(str[i]>='0' && str[i]<='9') {
            digits += 1;
        }
        else {
            sp_ch += 1;
        }
    }

    printf("%d characters appear in the input string",ch);
    printf("%d digits appear in the input string",digits);
    printf("%d Special characters appear in the input string",sp_ch);

    return 0;
}
//Program to check if the string is palindrome or not

#include<stdio.h>
#include<string.h>

int main() {

    int i,j,len,flag=0;
    char str[50], temp[50], str1[50];
    puts("Enter the string: ");
    gets(str);

    len = strlen(str);
    
    for(i=0;i<len;i++) {
        temp[i] = str[i];
    }
    temp[len] = '\0';

    for(i=0,j=len-1;str[i]!='\0';i++,j--) {
        str1[i] = str[j];
    }
    str1[len] = '\0';

    for(i=0;i<len;i++) {
        if(str1[i]!=temp[i]) {
            flag = 1;
        }
    }

    if(flag==1) {
        printf("String is not palindrome");
    }
    else {
        printf("String is palindrome");
    }

    return 0;
}
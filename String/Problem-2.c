//Reversing the string

#include<stdio.h>
#include<string.h>

int main() {

    int len,i,j;
    char str[50],str1[50];
    puts("Enter the string: ");
    gets(str);
    len = strlen(str);

    for(i=0,j=len-1;str[i]!='\0';i++,j--) {
        str1[i] = str[j];
    }

    printf("The reverse string is: ");
    for(i=0;i<len;i++) {
        printf("%c",str1[i]);
    }

    return 0;
}
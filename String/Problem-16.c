//Program to reverse vowels in the input string

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {

    char str[100],temp;
    int len,i=0,j;

    printf("Enter the string: ");
    gets(str);

    len = strlen(str);

    j = len-1;

    while(i<j) {
        if(!isVowel(str[i])) {
            i++;
        }
        else if(!isVowel(str[j])) {
            j--;
        }
        else {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    printf("The reversed string is %s",str);

    return 0;
}
//Program that returns the position of first occurrence of a character in input string

#include<stdio.h>

char find_ch(char str[], char ch);

int main() {
    char str[100], ch;
    int index;

    printf("Enter the string: ");
    scanf("%s",str);

    printf("\nEnter the character whose first occurrence has to be find: ");
    scanf(" %c",&ch);

    index = find_ch(str, ch);

    if(index!=-1) {
        printf("\nThe character %c is first occurred at index %d in the input string",ch,index);
    }
    else {
        printf("\nThe character %c is not found in the input string",ch);
    }

    return 0;
}

char find_ch(char str[], char ch) {
    int i;

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            return i;
        }
    }

    return -1;
}
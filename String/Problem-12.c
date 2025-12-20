//Program to extract a substring from the input string

#include<stdio.h>
#include<string.h>

int main() {

    int count=0,pos,len,length;
    char str[100],temp[100];

    length = strlen(str);

    printf("Enter the string: ");
    scanf("%s",str);

    printf("\nEnter the position from where you want to extract a substring: ");
    scanf("%d",&pos);

    printf("\nEnter the length of substring: ");
    scanf("%d",&len);

    while(count<len) {
        temp[count] = str[pos+count];
        count ++;
    }

    temp[count] = '\0';

    printf("\nExtracted substring is: %s",temp);

    return 0;
}


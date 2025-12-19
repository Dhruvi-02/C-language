//Program to sort a string

#include<stdio.h>
#include<string.h>

int main() {

    char str[100], ch;
    int len,i,j,k;

    printf("Enter the string: ");
    scanf("%s",str);

    len = strlen(str);

    for(i=1;i<len;i++) {
        for(j=0;j<len-i;j++) {
            if(str[j]>str[j+1]) {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }

    printf("Sorted string is: %s",str);

    return 0;
}
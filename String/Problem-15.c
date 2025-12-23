//Program to count punctuations in the input string

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char str[100];
    int len,i,count=0;

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    len = strlen(str);

    for(i=0;str[i]!='\0';i++) {
        if(!(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9' || str[i]==' ' || str[i]=='\n' || str[i]=='\t') ) {
            count += 1;
        }
    }

    printf("The total punctuations present in input string are %d",count);

    return 0;
}
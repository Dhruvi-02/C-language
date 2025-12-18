//Program to Bubble Sort string

#include<stdio.h>
#include<string.h>

int main () {

    char str[3][50], temp[50];
    int i,j;

    printf("Enter three strings:\n");
    for(i=0;i<3;i++) {
        scanf("%s",str[i]);
    }

    for(i=0;i<2;i++) {
        for(j=0;j<2-i;j++) {
            if(strcmp(str[j],str[j+1])>0) {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }

    printf("\nSorted string is:\n");
    for(i=0;i<3;i++) {
        printf("%s\n",str[i]);
    }

    return 0;
}
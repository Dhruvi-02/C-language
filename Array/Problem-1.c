//Program to read N integers and print N integers 

#include<stdio.h>

int main() {

    int i,a[5];
    printf("Enter the elements:\n");

    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
    }

    printf("The elements entered are: ");

    for(i=0;i<5;i++) {
        printf("%d\t",a[i]);
    }

    return 0;
}
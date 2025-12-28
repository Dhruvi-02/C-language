//Program to print unique elements

#include<stdio.h>

int main() {

    int a[50];
    int len,i,j,count=0;

    printf("Enter the length of the array: ");
    scanf("%d",&len);

    if(len>51) {
        printf("Dimension is too high");
        return 1;
    }

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<len;i++) {
        scanf("%d",&a[i]);
    }

    printf("\nThe array is:\n");
    for(i=0;i<len;i++) {
        printf("%d\t",a[i]);
    }

    printf("\n\nThe unique elements in array are: ");
    for(i=0;i<len;i++) {
        count = 0;
        for(j=0;j<len;j++) {
            if(a[i]==a[j]) {
                count ++;
            }
        }
        if(count==1) {
            printf("%d\t",a[i]);
        }
    }

    return 0 ;
}
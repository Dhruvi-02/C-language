//Program to delete value at ith location or at location entered by the user using one dimensional array

#include<stdio.h>

int main() {

    int N,i,idx,val;
    printf("Enter the length of array: ");
    scanf("%d",&N);

     if(N<0 || N==0) {
        printf("Enter valid length");
        return 1;
    }

    int a[N];

    printf("Enter the elements of array:\n");
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
    }

    printf("\nThe array is:\t");
    for(i=0;i<N;i++) {
        printf("%d\t",a[i]);
    }

    printf("\nEnter the ith location where value is to be removed: ");
    scanf("%d",&idx);

    a[idx] = 0;

    printf("\nThe new array is: ");
    for(i=0;i<N;i++) {
        printf("%d\t",a[i]);
    }

    return 0;
}

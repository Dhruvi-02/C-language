//Program to insert value at ith location or at location entered by user using one dimensional array

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

    printf("\nEnter the ith location where value is to be changed: ");
    scanf("%d",&idx);
    printf("\nEnter the value to be inserted: ");
    scanf("%d",&val);

    a[idx] = val;

    printf("\nThe new array is: ");
    for(i=0;i<N;i++) {
        printf("%d\t",a[i]);
    }

    return 0;
}
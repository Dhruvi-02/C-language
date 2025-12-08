//Program to find smallest and largest number in array of N elements

#include<stdio.h>

int main() {

    int N,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&N);

    int a[N];

    if(N==0 || N<0) {
        printf("Invalid array size");
        return 1;
    }

    printf("Enter the elements of array:\n");

    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
    }

    int min=a[0],max=a[0];

    for(i=0;i<N;i++) {
        if(a[i]<min) {
            min = a[i];
        }

        if(a[i]>max) {
            max = a[i];
        }
    }

    printf("The smallest element in array is %d",min);
    printf("\nThe largest element in array is %d",max);

    return 0;
}
//Program to find largest element in an array

#include<stdio.h>

float largest(float arr[],int n);

int main() {
    int n,i;
    float ans;
    printf("Enter the length of array: ");
    scanf("%d",&n);

    float arr[n];

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++) {
        scanf("%f",&arr[i]);
    }

    printf("\nThe array is:\n");
    for(i=0;i<n;i++) {
        printf("%f\t",arr[i]);
    }

    ans = largest(arr,n);

    printf("\n\nThe largest element in the array is %f",ans);

    return 0;
}

float largest(float arr[], int n) {
    float max=arr[0];
    int i;

    for(i=0;i<n;i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }

    return max;
}
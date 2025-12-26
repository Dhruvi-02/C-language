//Program to merge two arrays and print the merged array in descending order

#include<stdio.h>
#include<string.h>

int main() {

    int arr1[100],arr2[100],arr[200],len,i,j,k,temp;

    printf("Enter the length of both the arrays: ");
    scanf("%d",&len);

    printf("\nEnter the elements of first array:\n");
    for(i=0;i<len;i++) {
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter the elements of second array:\n");
    for(j=0;j<len;j++) {
        scanf("%d",&arr2[j]);
    }

    int length=2*len;

    for(i=0;i<len;i++) {
        arr[i] = arr1[i];
    }
    for(j=0;j<len;j++) {
        arr[i] = arr2[j];
        i++;
    }

   for(i=0;i<length;i++) {
    for(j=i+1;j<length;j++) {
        if(arr[j]>arr[i]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
   }

    printf("\nThe merged array in descending order is:\n");
    for(k=0;k<length;k++) {
        printf("%d\t",arr[k]);
    }

    return 0;
}
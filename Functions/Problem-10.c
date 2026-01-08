//Program to find target element in the input array

#include<stdio.h>

int largest(int arr[], int n, int target);

int main() {
    int arr[100],n,i,j,ans,target,temp;

    printf("Enter the length of the array: ");
    scanf("%d",&n);

    printf("\nEnter the target element: ");
    scanf("%d",&target);

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nThe sorted array is:\n");
    for(i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }


    ans = largest(arr,n,target);

    if(ans==1) {
        printf("\n\nThe target element %d is present in the input array",target);
    }
    else {
        printf("\n\nElement not found");
    }

    return 0;
}

int largest(int arr[], int n, int target) {
    int i;
    int left=0,right=n-1;
    int mid,flag=0;

    while(left<=right) {
        mid = (left+right)/2;

        if(arr[mid]==target) {
            flag = 1;
            return flag;
        }
        if(arr[mid]<target) {
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }

    return flag;
}
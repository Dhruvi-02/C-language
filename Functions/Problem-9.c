//Prgram to find if element is present in the array or not

#include<stdio.h>

int linear_search(int arr[], int n, int target);

int main() {
    int arr[100];
    int n,i,target,flag=0,ans;

    printf("Enter the length of array: ");
    scanf("%d",&n);

    if(n<0) {
        printf("Invalid length");
        return 1;
    }
    if(n>101) {
        printf("Dimensions are too high");
        return 1;
    }

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the target element: ");
    scanf("%d",&target);

    ans = linear_search(arr,n,target);

    if(ans==1) {
        printf("\nThe element is present in the input array");
    }
    else {
        printf("\nThe element is not present in the input array");
    }

}

int linear_search(int arr[], int n, int target) {
    int i,flag;
    for(i=1;i<n;i++) {
        if(arr[i]==target) {
            flag=1;
        }
    }

    return flag;
}
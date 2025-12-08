//Program to search a given element from the array

#include<stdio.h>

int main() {

    int i,a[5] = {1,2,3,4,5},target,flag=0;
    printf("Enter the element to be searched: ");
    scanf("%d",&target);

    for(i=0;i<5;i++) {
        if(a[i]==target) {
            flag = 1;
        }
    }

    if(flag==1) {
        printf("Element found in array");
    }
    else {
        printf("Element dosen't exist in array");
    }

    return 0;
}
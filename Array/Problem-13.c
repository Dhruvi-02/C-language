//Program to count duplicate elements in the input array

#include<stdio.h>
#include<string.h>

int main() {

    int arr[100],count[100];
    int len,i,j;

    printf("Enter the length of the array: ");
    scanf("%d",&len);

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<len;i++) {
        scanf("%d",&arr[i]);
        count[i] = 0;
    }

    printf("\nThe input array is:\n");
    for(i=0;i<len;i++) {
        printf("%d\t",arr[i]);
    }

    for(i=0;i<len;i++) {
        if(count[i]==-1) {
            continue;
        }
        
        int c = 1;
        for(j=i+1;j<len;j++) {
            if(arr[i]==arr[j]) {
                c ++;
                count[j] = -1;
            }
            count[i] = c;
        }    
    }

    printf("\n\nThe occurrences of elements in input array is:\n");
    for(i=0;i<len;i++) {
        if(count[i]!=-1) {
            printf("\n%d has appeared %d times in the input array",arr[i],count[i]);
        }
    }

    return 0;
}
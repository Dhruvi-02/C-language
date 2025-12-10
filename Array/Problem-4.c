//Program to arrange an array of N elements into ascending order

#include<stdio.h>

int main() {

    int N,i,j,temp;
    printf("Enter the no. of elements: ");
    scanf("%d",&N);
    int a[N];

    printf("Enter the elements:\n");
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
    }

    printf("\nThe array is:\t ");
    for(i=0;i<N;i++) {
        printf("%d\t",a[i]);
    }

    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(a[i]>a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nThe array of elements arranged in ascending order is:\t");
    for(i=0;i<N;i++) {
        printf("%d\t",a[i]);
    }

    return 0;

}
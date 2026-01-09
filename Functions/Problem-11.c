//Program to calculate average of all elements in two-dimensional array

#include<stdio.h>

double calcAvg(int arr[][100], int m, int n);

int main() {
    int arr[100][100],m,n,i,j;
    double ans;

    printf("Enter the no. of rows: ");
    scanf("%d",&m);
    printf("\nEnter the no. of columns: ");
    scanf("%d",&n);

    if(m>101 || n>101) {
        printf("\nDimensions are too high");
        return 1;
    }

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe array is:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    ans = calcAvg(arr,m,n);

    printf("\nThe average of all elements of the array is %f",ans);

    return 0;
}

double calcAvg(int arr[][100], int m, int n) {
    int sum=0,i,j;
    double avg;

    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            sum += arr[i][j];
        }
    }

    avg = sum/(m*n);

    return avg;
}
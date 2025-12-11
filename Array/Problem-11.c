//Program to check if matrix is magic square or not 
//Matrix is a magic square if sum of all the elements of rows, columns and diagonal is equal

#include<stdio.h>

int main() {

    int r,c,i,j,k,l,temp1,temp2,temp3,sum1,sum2;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    if(r!=c) {
        printf("Rows and colums should be same");
        return 1;
    }

    int a[r][c],sum[10];

    printf("\nEnter the elements of matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //Calculating sum of all elements of all rows

    for(i=0;i<r;i++) {
        sum[i] = 0;
        for(j=0;j<c;j++) {
            sum[i] += a[i][j];
        }
    }

    temp1 = sum[0];
    for(i=1;i<r;i++) {
        if(sum[i]!=temp1) {
            printf("The matrix is not a magic square");
            return 1;
        }
    }

    //Calculating sum of all elements of all columns

    for(j=0;j<c;j++) {
        sum[j] = 0;
        for(i=0;i<r;i++) {
            sum[j] += a[i][j];
        }
    }

    temp2 = sum[0];
    for(j=1;j<c;j++) {
        if(sum[j]!=temp1) {
            printf("The matrix is not a magic square");
            return 1;
        }
    }

    //Calculating sum of all elements of all diagonals

    sum1 = 0;
    for(i=0;i<r;i++) {
        sum1 += a[i][i];
    }

    sum2 = 0;
    for(i=0;i<r;i++) {
        sum2 += a[i][r-i-1];
    }

    if(sum1!=sum2) {
        printf("The matrix is not a magic square");
        return 1;
    }

    printf("The matrix is a magic square");

    return 0;
}
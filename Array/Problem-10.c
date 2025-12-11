//Program to print sum of rows and sum of columns in a matrix

#include<stdio.h>

int main() {

    int r,c,i,j,sum;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);

    if(r<=0 || c<=0) {
        printf("Invalid Dimensions, enter dimensions between 1-9");
        return 1;
    }
    else if(r>9 || c>9) {
        printf("Dimensions are too high, enter dimensions between 1-9");
        return 1;
    }

    int a[r][c];

    printf("\nEnter the elements of the matrix:\n");
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

    printf("\nThe sum of elements of rows is:\n");
    for(i=0;i<r;i++) {
        sum = 0;
        for(j=0;j<c;j++) {
            sum = sum + a[i][j];
        }
        printf("%d\n",sum);
    }

    printf("\nThe sum of elements of columns is:\n");
    for(j=0;j<c;j++) {
        sum = 0;
        for(i=0;i<r;i++) {
            sum = sum + a[i][j];
        }
        printf("%d\t",sum);
    }
    
    return 0;
}
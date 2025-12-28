//Transpose of matrix

#include<stdio.h>
#include<string.h>

int main() {

    int a[10][10];
    int rows,cols,i,j;

    printf("Enter the rows of the matrix: ");
    scanf("%d",&rows);
    printf("\nEnter the columns of the matrix: ");
    scanf("%d",&cols);

    if(rows>11 || cols>11) {
        printf("\nDimensions are too high\n");
        return 1;
    }

    printf("\nEnter the elements of the %d*%d matrix:\n",rows,cols);
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe %d*%d matrix is:\n",rows,cols);
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transpose of the %d*%d matrix is:\n",rows,cols);
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
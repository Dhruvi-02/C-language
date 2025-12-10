//Program to add two matrices

#include<stdio.h>

int main() {

    int m1,n1,m2,n2,m,n,i,j;
    printf("Enter the no. of rows of array-1: ");
    scanf("%d",&m1);
    printf("Enter the no. of columns of array-1: ");
    scanf("%d",&n1);
    printf("Enter the no. of rows of array-2: ");
    scanf("%d",&m2);
    printf("Enter the no. of columns of array-2: ");
    scanf("%d",&n2);

    if(m1!=m2 && n1!=n2) {
        printf("Addition can't be performed, the dimensions should be same for both arrays");
        return 1;
    }
    else {
        m = m1 = m2;
        n = n1 = n2;
    }

    int a[m][n],b[m][n],c[m][n];
    
    printf("\nEnter elements of array-1:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of array-2:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThe array-1 is:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe array-2 is:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe resultant array is:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Program to multiply two matrices

#include<stdio.h>

int main() {
    
    int m1,n1,m2,n2,i,j,k;
    printf("Enter the no. of rows of matrix-1: ");
    scanf("%d",&m1);
    printf("Enter the no. of columns of matrix-1: ");
    scanf("%d",&n1);
    printf("Enter the no. of rows of matrix-2: ");
    scanf("%d",&m2);
    printf("Enter the no. of columns of matrix-2: ");
    scanf("%d",&n2);

    if(n1!=m2) {
    printf("Multiplication can't be performed, columns of matrix-1 which is %d must be equal to rows of matrix-2 which is %d\n",n1,m2);
    return 1;
    }
    else if(m1>9 || n1>9 || m2>9 || n2>9) {
        printf("Dimensions are too high, enter dimensions between 1-9\n");
        return 1;
    }
    else if(m1==0 || n1==0 || m2==0 || n2==0 || m1<=0 || n1<=0 || m2<=0 || n2<=0) {
        printf("Enter dimensions between 1-9\n");
        return 1;
    }


    int a[10][10],b[10][10],c[10][10];

    printf("\nEnter elements of matrix-1:\n");
    for(i=0;i<m1;i++) {
        for(j=0;j<n1;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of matrix-2:\n");
    for(i=0;i<m2;i++) {
        for(j=0;j<n2;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThe matrix-1 is:\n");
    for(i=0;i<m1;i++) {
        for(j=0;j<n1;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix-2 is:\n");
    for(i=0;i<m2;i++) {
        for(j=0;j<n2;j++) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    // Intitialising resultant matrix to zero => If this isn't done then any garbage value get stored initially which result in wrong output

    for(i=0;i<m1;i++) {
        for(j=0;j<n2;j++) {
            c[i][j] = 0;
        }
    }

    //Performing multiplication and storing values in resultanat matrix

    for(i=0;i<m1;i++) {
        for(j=0;j<n2;j++) {
            for(k=0;k<n1;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    //Printing the resultant matrix

    printf("\nThe resultant matrix is:\n");
    for(i=0;i<m1;i++) {
        for(j=0;j<n2;j++) {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}   
//Program to print 1st N numbers of the Fibonacci series

#include<stdio.h>

int main() {

    int N,a=0,b=1,c,i;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    printf("%d\t%d\t",a,b);
    
    for(i=1;i<=(N-2);i++) {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }

    return 0;
}
//Program to calculate sum of digits of a given number

#include<stdio.h>

int main() {

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp=n,r,sum=0,N;

    while(temp>0) {
        r = temp%10;
        sum = sum + r;
        N = temp-r;
        temp = N/10;
    }

    printf("The sum of digits of %d is %d",n,sum);

    return 0;
}
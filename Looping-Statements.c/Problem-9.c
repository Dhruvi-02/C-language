//Program to check if number is Armstrong or not

#include<stdio.h>

int main() {

    int n,r,N;
    long sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp=n;

    while(temp>0) {
        r=temp%10;
        sum = sum + (r*r*r);
        N = temp-r;
        temp = N/10;
    }

    if(sum==n) {
        printf("%d is an Armstrong number",n);
    }
    else {
        printf("%d is not an Armstrong number",n);
    }

    return 0;
}
//Factorial of a number using Recursion

#include<stdio.h>

int fact(int n);

int main() {
    int n,ans;

    printf("\nEnter the number: ");
    scanf("%d",&n);

    ans = fact(n);

    printf("\nFactorial of %d is %d",n,ans);

    return 0;
}

int fact(int n) {
    if(n<0) {
        printf("Invalid number");
        return 1;
    }

    if(n<=1) {
        return 1;
    }

    return n*fact(n-1);
}
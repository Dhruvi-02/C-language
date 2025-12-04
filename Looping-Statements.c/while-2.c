//Program to reverse a number and check if it is palindrome or not

#include<stdio.h>

int main() {

    int n,sum=0,r,N;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp = n;
    
    while(n>0) {
        r = n%10;
        sum = sum*10+r;
        N = n-r;
        n = N/10;
    }
    if(sum == temp) {
        printf("The number is palindrome");
    }
    else {
        printf("The number is not palindrome");
    }
    return 0;
}
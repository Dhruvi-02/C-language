//Fibonacci Series

#include<stdio.h>

int Fibonacci(int n);

int main() {
    int n,i;
    printf("Enter the no. of terms of the Fibonacci Series: ");
    scanf("%d",&n);
    
    printf("\n");
    for(i=0;i<n;i++) {
        printf("%d\t",Fibonacci(i));
    }
    
    return 0;
}

int Fibonacci(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}
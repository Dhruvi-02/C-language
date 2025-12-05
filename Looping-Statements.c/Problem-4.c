//Program to print 1st N odd numbers and calculate their sum and average

#include<stdio.h>

int main() {

    int N,i=1;
    float sum=0,avg=0;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    while(i<=N) {
        printf("%d\t",i);
        sum = sum + i;
        i += 2;
    }

    avg = sum/N;
    printf("\nSum is: %f \nAverage is: %f",sum,avg);

    return 0;
}
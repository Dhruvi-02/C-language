//Program to print 1st N natural numbers and calculate their sum and average

#include<stdio.h>

int main() {

    int N,count=1;
    float sum = 0,avg;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    while(count<=N) {
        sum += count;
        count ++;
    }
    avg = sum/N;
    printf("The sum is: %f \nThe average is: %f",sum,avg);

    return 0;
}
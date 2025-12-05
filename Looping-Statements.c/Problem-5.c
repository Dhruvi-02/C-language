//Program to print all numbers between given two numbers x and y including x and y and calculate their sum and average

#include<stdio.h>

int main() {

    int i,x,y,count=0;
    float sum=0,avg;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);

    for(i=x;i<=y;i++) {
        printf("%d\t",i);
        sum = sum+i;
        count += 1;
    }

    avg = sum/count;
    printf("\nSum is %f \nAverage is %f",sum,avg);

    return 0;
}
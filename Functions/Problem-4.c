//Program to return final amount calculated

#include<stdio.h>

void printLine(char ch,int len);
float value(float principle,float rate,int time);

int main() {

    float principle,rate,amount;
    int time;

    printf("Enter the principle amount: ");
    scanf("%f",&principle);
    printf("\nEnter the rate: ");
    scanf("%f",&rate);
    printf("\nEnter the time period: ");
    scanf("%d",&time);

    printLine('*',51);
    
    printf("\nPrinciple Amount\t%f",principle);
    printf("\nInterest Rate\t\t%f",rate);
    printf("\nTime Period\t\t%d\n",time);

    amount = value(principle,rate,time);

    printf("\n");
    printLine('*',51);

    printf("\n%f\t%f\t%d\t%f\t",principle,rate,time,amount);

    printf("\n");
    printLine('*',51);

    return 0;
}

void printLine(char ch,int len) {
    int i;
    for(i=0;i<len;i++) {
        printf("%c",ch);
    }
}

float value(float principle,float rate,int time) {
    int year=1;
    float amount=principle;
    rate = rate/100;

    while(year<=time) {
        amount *= (1+rate);
        year ++;
    }

    return(amount);
}
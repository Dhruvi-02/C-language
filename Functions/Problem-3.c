//Program to include the arguments in the function calls

#include<stdio.h>

void printLine(char ch);
void value(float,float,int);

int main() {

    float principle,rate;
    int year;

    printf("Enter the principle amount: ");
    scanf("%f",&principle);
    printf("\nEnter the rate of interest: ");
    scanf("%f",&rate);
    printf("\nEnter the time period: ");
    scanf("%d",&year);

    rate = rate/100;

    printf("\nPrinciple Amount\t%f",principle);
    printf("\nInterest Rate\t\t%f",rate);
    printf("\nTime Period\t\t%d\n",year);

    printLine('D');
    value(principle,rate,year);

    return 0;
}

void printLine(char ch) {

    int i;
    for(i=0;i<51;i++) {
        printf("%c",ch);
    }
}

void value(float principle,float rate,int year) {

    int time=1;
    float sum=principle;

    while(time<=year) {
        sum = sum*(1+rate);
        time ++;
    }

    printf("\n%f\t%f\t%d\t%f\t",principle,rate,year,sum);
}
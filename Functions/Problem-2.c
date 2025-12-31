//Program with multiple functions that do not communicate any data between them

#include<stdio.h>

void value(void);
void printLine(void);

int main() {
    value();
    return 0;
}

void value(void) {
    float principle,rate,sum;
    int time,year;

    printf("Enter the Principle amount: ");
    scanf("%f",&principle);
    printf("\nEnter the rate of interest: ");
    scanf("%f",&rate);
    printf("\nEnter the time period: ");
    scanf("%d",&time);
    printf("\n");

    year = 1;
    sum = principle;
    rate = rate/100;
    while(year<=time) {
        sum = sum*(1+rate);
        year ++;
    }

    printLine();
    printf("\nPrinciple Amount\t%f",principle);
    printf("\nInterest Rate\t\t%f",rate);
    printf("\nTime Period\t\t%d",time);
    printf("\n\t\t\t%f\n",sum);   
    printLine();
}

void printLine(void) {
    int i;
    // printf("\n");
    for(i=1;i<37;i++) {
        printf("-");
    }
    // printf("\n");
}


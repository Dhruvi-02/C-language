//To check whether student is pass or fail based on average of four subject marks

#include<stdio.h>

int main() {

    int m1,m2,m3,m4,sum,avg;
    printf("Enter the marks of subject-1: ");
    scanf("%d",&m1);
    printf("Enter the marks of subject-2: ");
    scanf("%d",&m2);
    printf("Enter the marks of subject-3: ");
    scanf("%d",&m3);
    printf("Enter the marks of subject-4: ");
    scanf("%d",&m4);

    sum = m1+m2+m3+m4;
    avg = sum/4;

    if(avg>25) {
        printf("Student pass the exam");
    }
    else {
        printf("Student fail the exam");
    }

    return 0;
}
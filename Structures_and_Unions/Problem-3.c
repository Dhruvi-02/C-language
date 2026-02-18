//Program for totaling the score of all subjects of individual student

#include<stdio.h>

struct score {
    int sub1;
    int sub2;
    int sub3;
    int total;
};

int main() {
    int i,j;

    struct score student[2] = { {45,43,47}, {43,41,23} };
    struct score total;

    for(i=0;i<2;i++) {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
    }

    printf("*******************************");
    printf("\nSubject                Total\n\n");
    for(i=0,j=1;i<2;i++,j++) {
        printf("Subject %d\t\t%d\n",j,student[i].total);
    }
    printf("*******************************");

    return 0;
}
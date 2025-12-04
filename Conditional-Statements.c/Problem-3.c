//Program to read marks from keyboard and display equivalent grade according to the marks

#include<stdio.h>

int main() {

    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>='80' && marks<='100') {
        printf("Grade: Distinction");
    }
    else if(marks>='60' && marks<='79') {
        printf("Grade: First Class");
    }
    else if(marks>='35' && marks<='59') {
        printf("Grade: Second Class");
    }
    else if(marks>='0' && marks<='34') {
        printf("Grade: Fail");
    }
    else {
        printf("Invalid marks");
    }
    
    return 0;
}